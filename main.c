// coded by wanz
#include <stdio.h>
#include <string.h>

void Code(int the_code);
//void Latest(float new_price, int value_type, int id, int the_array[5]);
void update(int code_item, int Code[5], float Price[5], int Quantity[5], char Item[5][100]);
void Latest(int Code[5], float Price[5], int Quantity[5], char Item[5][100]);

int main()
{
    int code_item, id_to_update;
    int Code[5] = {113, 211, 323, 442, 677};
    float Price[5] = {3.50, 5.99, 1.99, 0.85,  8.99};
    int Quantity[5] = {100,20,50,33,45};
    char Item[5][100] = {"Pen", "Notebook", "File", "Eraser", "Pencil colour"};
    
    printf("***Stationery Inventory System***\n");
    printf("Code Item Price Qty\n");
    
    for (int i = 0; i < 5; i++)    {
        printf("\n %d ", Code[i]);
        printf(" %s ", Item[i]);
        printf(" %.2f ", Price[i]);
        printf(" %d ", Quantity[i]);
    }
    
    printf("\n\nEnter item code you want to update: ");
    scanf("%d", &code_item);
    switch (code_item)  {
        case 113:
            id_to_update = 0;
            break;
        case 211:
            id_to_update = 1;
            break;
        case 323:
            id_to_update = 2;
            break;
        case 442:
            id_to_update = 3;
            break;
        case 677:
            id_to_update = 4;
            break;
        default:
            return main();
            break;
    }
    update(id_to_update, Code,  Price,  Quantity,  Item);
   // while (code_item != 113 && code_item != 211 && code_item != 323 && code_item != 442 && code_item != 677)    {
//        printf("Item not found . . .\n\n");
//        return main();
//    }
    
    //update(code_item);
    return 0;
}


void update(int the_code, int Code[5], float Price[5], int Quantity[5], char Item[5][100])   {
    char what_to_update[20];
    float new_price;
    int new_quantity;
    
    printf("\n Choose to update P-price or Q-quantity: ");
    scanf("%s", what_to_update);
    
    
    if (strcmp(what_to_update,"P") == 0) {
        printf("Enter new price: ");
        scanf("%f", &new_price);
        Price[the_code] = new_price;
        
      //  printf("%.2f", Price[the_code]);
      
       // Latest(new_price, 0, the_code);
       
    }   else if (strcmp(what_to_update,"Q") == 0)    {
        printf("Enter new Quantity: ");
        scanf("%d", &new_quantity);
        Quantity[the_code] = new_quantity;
        
        //Latest(new_quantity, 1, the_code);
      
    }
    Latest(Code,  Price,  Quantity,  Item);
}

void Latest(int Code[5], float Price[5], int Quantity[5], char Item[5][100])   {
    char conti[10];
    int id;
     printf("***Stationery Inventory System***\n");
    printf("Code Item Price Qty\n");
    
    for (int i = 0; i < 5; i++)    {
        printf("\n %d ", Code[i]);
        printf(" %s ", Item[i]);
        printf(" %.2f ", Price[i]);
        printf(" %d ", Quantity[i]);
    }
    
    printf("\nDo you want to update another item?: ");
    scanf("%s", conti);
    if (strcmp(conti, "N") == 0)    {
        printf("Thanks for using this program");
        
    }   else    {
        printf("Enter item code you want to update: ");
        scanf("%d", &id);
        update(id, Code,  Price,  Quantity,  Item);
    }
}



