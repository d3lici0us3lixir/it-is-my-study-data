// ConsoleApplication1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"




int main() {
	int a = 1, b ,c=1;


	
		
		for (b = 1; b <= a; b++)
		{
			

			if (a%b == 0)

			{
				if (a == 1)
				{
					a++;
				}
				else {
					if (a == b)
					{
						printf("%d\n", a);
						a++;
						b = 1;
						c++;
						if(c==21)
						{
							break;
						}
					}
					else
					{
						a++;
						b = 1;
					}
				}
			}
			
		}
			
	

	return 0;
}