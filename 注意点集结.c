1.printf 输出时 \" 表示"     \\表示\   %%表示%
2.字符的输入和输出：
    char ch;
    scanf("%c",&ch);  不会跳过空白字符，若第一个输入字符是" ",则存储在 ch 里字符就是空格；
    getchar()是读入一个字符并将其返回，所以必须使用赋值将其存储在变量中：ch=getchar();   返回的是int型数值，同时也不会跳过空格；
            示例：while((ch=getchar())==' ') ;   //此语句将把第一个非空格字符存储在ch中；
       
    
