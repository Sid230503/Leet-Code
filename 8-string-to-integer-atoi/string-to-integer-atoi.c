int myAtoi(char* s) {
    int n = 0;
    int sign = 1;

    // Skip white space
    while(*s == ' ' || *s == '\t')
        s++;
    
    // Handle optional sign
    if(*s == '-'){
        sign = -1;
        s++;
    } else if(*s == '+'){
        s++;
    }

    // Convert digits to integer
    while(*s >= '0' && *s <= '9'){
        int digit = *s - '0';

        if(n > (INT_MAX - digit) / 10){
            return (sign == 1) ? INT_MAX : INT_MIN;
        }
        n = n * 10 + (*s - '0');
        s++;
    }

    return sign * n;
}