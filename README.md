# grocery-system
A simple grocery billing system built using C language

# 🛒 Grocery Store Billing System in C

This is a beginner-level C program that simulates a basic billing system for a grocery store. The program allows users to input items they wish to purchase, calculates the total price, and applies discounts when applicable.

---

## 📌 Features

- Displays available grocery items with prices.
- Takes user input for multiple items and their quantities.
- Calculates total price per item.
- Applies a **10% discount** if the item cost exceeds **₹500**.
- Displays a final bill summary with all item details.

---

## 📦 Available Items

| Item     | Price (per unit) |
|----------|------------------|
| Dal      | ₹200 per kg      |
| Shampoo  | ₹450 per bottle  |
| Chips    | ₹40 per packet   |
| Cream    | ₹300 per tube    |
| Oil      | ₹500 per bottle  |
| Flour    | ₹50 per kg       |

---

## 🧾 Sample Output

```
Available items and their prices:
Dal - Rs. 200 per kg
Shampoo - Rs. 450 per bottle
Chips - Rs. 40 per packet
Cream - Rs. 300 per tube
Oil - Rs. 500 per bottle
Flour - Rs. 50 per kg

Enter the number of different items u are purchasing: 2

 Item 1:
Enter Item name: Shampoo
Enter quantity: 2
Discount applied on this item: Rs .90.000000
Item: Shampoo , Quantity: 2, Price: Rs .810.000000

 Item 2:
Enter Item name: Chips
Enter quantity: 3
Item: Chips , Quantity: 3, Price: Rs .120.000000

Total bill amount: Rs .930.000000
```

---

## 📂 How to Run

1. Copy the code from `main.c`.
2. Compile using any C compiler:
   ```bash
   gcc main.c -o billing
   ```
3. Run the executable:
   ```bash
   ./billing
   ```

---

## 📋 Notes

- Input is **case-sensitive**. Use proper item names like `Dal`, not `dal`.
- Invalid items will be skipped with a warning message.
- Discount applies **per item**, not on the total bill.

---


