    while(*stu1 == *stu2)
    {
        if(*stu1=='\0' || *stu2=='\0')
        {
            break;
        }
        stu1++;
        stu2++;
    }
   if(*stu1=='\0' && *stu2=='\0')
   {
    printf("Department are same....");
   }
   else printf("Department are not same...");
