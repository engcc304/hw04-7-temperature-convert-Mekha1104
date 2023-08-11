/*
    จงเขียนโปรแกรมเพื่อแปลงอุณหภูมิ โดยรับมาจากผู้ใช้เป็นองศาเซลเซียส และแปลงเป็นฟาเรนไฮต์
    
    Test case:
        User input :
            22
    Output:
        22 degree Celsius = 71.6 degree Fahrenheit

    Test case:
        User input :
            36
    Output:
        36 degree Celsius = 96.8 degree Fahrenheit
*/

#include <stdio.h>

int main() {
    int  celsius ;
    float fahrenheit;

    // รับอุณหภูมิจากผู้ใช้ในหน่วยเซลเซียส
    printf("User input : ");
    scanf("%d", &celsius);

    // แปลงจากเซลเซียสเป็นฟาเรนไฮต์
    fahrenheit = (celsius * 9 / 5) + 32;

    // แสดงผลลัพธ์
    printf("%d degree Celsius = %0.1f degree Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
