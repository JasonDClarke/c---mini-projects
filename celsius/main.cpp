#include <stdio.h>
/* prints a fahrenheit clsius table */
float celsiustofahrenheit(float celsius);
float fahrenheittocelsius(float fahrenheit);
main()
{
        float fahr, celsius;
        float lower, upper, step;

        lower=0;
        upper=300;
        step=20;

        fahr=upper;
        while (fahr >= lower) {
            celsius= fahrenheittocelsius(fahr);
            printf("%3.0f\t%6.1f\n", fahr, celsius);
            fahr=fahr-step;
        }
           celsius=upper;
               while (celsius >= lower) {
            fahr= celsiustofahrenheit(celsius);
            printf("%3.0f\t%6.1f\n", celsius, fahr);
            celsius=celsius-step;
        }
}
float celsiustofahrenheit(float celsius)
{
    return ((celsius*(9))/5)+32;
}
float fahrenheittocelsius(float fahrenheit)
{
    return (5)*(fahrenheit-32)/9;
}
