#include <stdio.h>
#include <string.h>

int cid = 0;
int pid = 0;
int bid = 0;

struct Customer {
    int  cusId;
    char cusName[50];
    char cusPhone[15];   /* room for 10-digit number + '\0' */
    char cusEmail[50];
} cus[100];

struct Product {
    int  proId;
    char proName[50];
    int  proQnt;
    int  proPrize;
} pro[100];

struct Billing {
    int billId;
    int cusId;
    int nopro;
    struct Items {
        int proId;
        int proQnt;
    } item[100];
} bill[100];

void CreateBill() {
    bill[bid].billId = bid + 1;
    printf("Enter the Customer ID: ");
    scanf("%d", &bill[bid].cusId);
    printf("Enter the Number of Products: ");
    scanf("%d", &bill[bid].nopro);

    for (int i = 0; i < bill[bid].nopro; i++) {
        printf("Enter Product ID: ");
        scanf("%d", &bill[bid].item[i].proId);
        printf("Enter Product Quantity: ");
        scanf("%d", &bill[bid].item[i].proQnt);
    }
    printf("Billing Created Successfully.\n");
    bid++;
}

void createCustomer() {
    cus[cid].cusId = cid + 1;
    printf("Enter Your Name:  ");
    scanf("%s", cus[cid].cusName);
    printf("Enter Your Phone Number:  ");
    scanf("%s", cus[cid].cusPhone);
    printf("Enter Your Email:  ");
    scanf("%s", cus[cid].cusEmail);
    printf("Data Entered Successfully\n");
    cid++;
}

void addProduct() {
    pro[pid].proId = pid + 1;
    printf("Enter Product Name: ");
    scanf("%s", pro[pid].proName);

    /* ----------- fixed lines ----------- */
    printf("Enter Product Quantity: ");
    scanf("%d", &pro[pid].proQnt);        /* & added */
    printf("Enter Product Price (per unit): ");
    scanf("%d", &pro[pid].proPrize);      /* & added */
    /* ----------------------------------- */

    printf("Product Added Successfully.\n");
    pid++;
}

void displayProduct() {
    for (int i = 0; i < pid; i++) {
        printf("Product ID: %d\n", pro[i].proId);
        printf("Name      : %s\n", pro[i].proName);
        printf("Quantity  : %d\n", pro[i].proQnt);
        printf("Price     : %d\n\n", pro[i].proPrize);
    }
}

void displayCustomers() {
    for (int i = 0; i < cid; i++) {
        printf("Name         : %s\n", cus[i].cusName);
        printf("PhoneNumber  : %s\n", cus[i].cusPhone);
        printf("Email        : %s\n", cus[i].cusEmail);
        printf("Customer ID  : %d\n\n", cus[i].cusId);
    }
}

void displaySpecificCustomers(int index) {
    if (index < 0 || index >= cid) {
        printf("Invalid customer index.\n");
        return;
    }

    printf("\n===== Customer Details =====\n");
    printf("ID    : %d\n", cus[index].cusId);
    printf("Name  : %s\n", cus[index].cusName);
    printf("Phone : %s\n", cus[index].cusPhone);
    printf("Email : %s\n", cus[index].cusEmail);

    int billsFound = 0;
    for (int i = 0; i < bid; i++) {
        if (bill[i].cusId == cus[index].cusId) {
            billsFound = 1;
            printf("\n--- Bill #%d (Bill ID: %d) ---\n", i + 1, bill[i].billId);

            for (int j = 0; j < bill[i].nopro; j++) {
                int pidWanted = bill[i].item[j].proId;
                int qty       = bill[i].item[j].proQnt;
                int pidx      = -1;

                for (int k = 0; k < pid; k++)
                    if (pro[k].proId == pidWanted) { pidx = k; break; }

                if (pidx == -1) {
                    printf("   Unknown product ID %d (Qty: %d)\n", pidWanted, qty);
                } else {
                    printf("   Product: %s | Qty: %d | Unit Price: %d | Price: %d\n",
                           pro[pidx].proName, qty, pro[pidx].proPrize,
                           pro[pidx].proPrize * qty);
                }
            }
        }
    }
    if (!billsFound) puts("\n(No bills for this customer yet)");
    puts("=============================\n");
}

int main(void) {
    while (1) {
        int n;
        printf("\n 1) Create Customer"
               "\n 2) Display Customer"
               "\n 3) Specific Customer Details"
               "\n 4) Add Products"
               "\n 5) Billing"
               "\n 6) Show Products"
               "\n Your Option: ");
        scanf("%d", &n);

        switch (n) {
            case 1: createCustomer();      break;
            case 2: displayCustomers();    break;
            case 3: {
                int id;
                printf("Enter The Customer ID: ");
                scanf("%d", &id);
                displaySpecificCustomers(id - 1);
            } break;
            case 4: addProduct();          break;
            case 5: CreateBill();          break;
            case 6: displayProduct();      break;
            default: puts("Invalid option.");
        }
    }
    return 0;
}
