def total_bill():
    print("Name of the iteam:",name)
    print("Price:",price)
    tax=20
    print("Tax:",tax)
    service_charges=15
    print("Service Charges:",service_charges)
    tb=tax+service_charges+price
    return tb
print("Your total bill is:",total_bill())
