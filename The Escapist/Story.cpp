#include "stdafx.h"

void Story()
{
	int choice;
	int ichoice = 0;
	char MAP;
	int Hexa;
	int pos = 0;
	int _rand;

	setcolor(1);
	printf("The Escapist\n");
	setcolor(7);
	printf("�ܼ� â�� ��üȭ������ Ű���ּ���.\n");
	getch();
	printf("�ܼ� â���� C:\\WINDOWS\\system32\\cmd.exe��� ������ ���� ������ Ŭ���� �ϰ� �Ӽ����� �� �۲�ũ�⸦ 8�� ���ּ���.\n");
	getch();
	printf("��� ������ ���߽ð� �÷����� �غ� �Ǽ̴ٸ� �ƹ� Ű�� �����ּ���.\n");
	getch();
	system("cls");
	printf("......\n");
	getch();
	printf("����..���� �����..?\n");
	getch();
	printf("�ϴ� ���Ⱑ ����� �˾ƺ��߰ھ�.\n");
	getch();
	printf("�ֺ��� ���� ����Ƹ����� ��ǥ���ΰ� ������..\n");
	getch();
	system("cls");
	setcolor(3);
	while (1)
	{
		printf("\n\t�Ա� ���� �����?\n");
		printf("\t1. ����       2. ���� �ʰ� ����Ƹ��� ���η� ����\n\t");
		scanf("%d", &choice);
		if (choice == 1)
		{
			printf("\t���� ������ �ʴ´�.\n");
			getch();
			system("cls");
		}
		else if (choice == 2) {
			printf("\t����Ƹ��� ���η� ����.\n");
			break;
		}
		else if (choice == 3) {
			printf("\t��..���ȴ�!!    �̽��Ϳ��� 1  [���� �Ͱ�]\n");
			getch();
			exit(0);
		}
	}
	setcolor(7);
	getch();
	system("cls");
	printf("���η� ���� ���� ���������� ���δ�.\n");
	getch();
	printf("�ٷ� ���� ���������� �������� �ִ�.\n");
	getch();
	printf("�������� ���������� ���ĸ��� ���ĸ��� �ִ�.\n");
	getch();
	setcolor(6);
	printf("| ������ ��� ������.\n");
	getch();
	setcolor(7);
	printf("���ʿ��� ȭ����� �ִ�.\n");
	getch();
	setcolor(13);
	printf("| ���� �����־� �ణ �������� ������ ����..\n");
	getch();
	setcolor(7);
	printf("�տ� ȭ����� �ִ�.\n");
	getch();
	printf("������.\n");
	getch();
	printf("ȭ����� �ٴڿ��� �� ���÷��� �߰��ߴ�.\n");
	getch();
	printf("�����...���÷��� ��ǥ���� ���� �� ���� ���÷��̶� ���� �� �� �־���.\n");
	getch();
	printf("�� ����Ƹ����� �̸��� �� ����̰�...\n");
	getch();
	printf("�޸��� ���� ����Ƹ����� ������ �ִ�.\n");
	getch();
	setcolor(10);
	pos = 1;
	printf("�������� ����� ������ �� �� �ֽ��ϴ�.\n");
	getch();
	printf("������ ���÷��� ������ 'M'�� �����ּ���.\n");
	system("cls");
	setcolor(7);
	Pass(pos);
	printf("���÷��� ���� �� ȭ��ǿ��� ���� ����Ƹ��� ���η� ����.\n");
	Pass(pos);
	setcolor(12);
	printf("���ڱ� ö�� �Ҹ��� ������ �Ӹ� ������ ���𰡰� ��������.\n");
	Pass(pos);
	printf("�� ���� ���� ���𰡸� ��� �Ѿ�����.\n");
	Pass(pos);
	printf("�Ͼ ���� ������ �Ѿ��� ���п� ������ ������ ���� ���� �� �־���.\n");
	Pass(pos);
	printf("�Ӹ� ������ �������� ���� ������ü ����� ū �븮���̾���.\n");
	Pass(pos);
	printf("�̰� ���������� �� ���� �Ƹ� ������ �� ����.\n");
	Pass(pos);
	printf("������ �����ؾ� �ڴ�.\n");
	Pass(pos);
	system("cls");
	setcolor(7);
	printf("�׸��� �븮�� ������ ö�� ������� ���� ��������� �ִ�.\n");
	Pass(pos);
	printf("�� ��������� �� �����ֱ⵵ ������ �ϴ� ì�ܺ���.\n");
	Hexa = 1;
	Pass(pos);
	system("cls");
	printf("�ٽ� �ɾ�� �����Ͽ���.\n");
	Pass(pos);
	pos = 2;
	printf("������ �����ʿ��� 5���� ���� ���������� �ִ�.\n");
	Pass(pos);
	printf("�� ���������� �Ź̰԰� �� ������ �־��µ� �Ź̰Ե��� ��� ������ �߱������� �����ϰ� ���ڰ� ������ �ִ�.\n");
	Pass(pos);
	printf("�� ���ʿ�������  ");
	setcolor(13);
	printf("3  5  1  8  9");
	setcolor(7);
	printf("�� ���ڰ� ������ �ִ�.\n");
	Pass(pos);
	printf("�߿��� ���̴� ����ص���.\n");
	Pass(pos);
	system("cls");
	printf("���ڸ� ����ϰ� �ٽ� ����ߴ�.\n");
	Pass(pos);
	printf("�̹����� �� ������ ������ ���� ������ ����.\n");
	pos = 3;
	Pass(pos);
	printf("�� ���� ���������� �Ƕ�Ͼƿ� �ݷμҸ� ���� �ִ�.\n");
	Pass(pos);
	printf("������ ���ͳݿ��� �� ������� �Ƹ� �� �� ������ ���ι���⿴�� �� ����.\n");
	Pass(pos);
	printf("�������� ������ �� ������ ���δ�.\n");
	Pass(pos);
	printf("���� �� �������� ���� �Ĵٺ��� �� ����.\n");
	Pass(pos);
	printf("�������� ������ �� ������ ���δ�.\n");
	Pass(pos);
	printf("���� �ڳ�����.\n");
	Pass(pos);
	printf("�׷��� ���� �߰��뿡 �� ������ �ִ�.\n");
	Pass(pos);
	printf("������ �� �����̴�.\n");
	Pass(pos);
	system("cls");
	setcolor(3);

	printf("\n\t������ ��ܺ���?\n");
	printf("\t1. ������ ����.      2. �׳� �������� ������.\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		printf("���...�ƹ� �ϵ� �Ͼ�� �ʴ´�.\n");
		Pass(pos);
		printf("�ƹ� �ϵ� �� �Ͼ�� �����ΰǰ�...\n");
		Pass(pos);
		break;
	case 2:
		setcolor(12);
		printf("���ڱ� ������ ��, �ⱸ�� � ������ ������.\n");
		Pass(pos);
		printf("���� ���Ҹ��� Ŀ����.\n");
		Pass(pos);
		printf("�������� ������ ���� �ö󰡱� �����ߴ�.\n");
		Pass(pos);
		printf("���� ���⼭ ���� ����� ã�� ���ϸ� �������� �� ���̴�.\n");
		Pass(pos);
		system("cls");
		printf("����, ������, ���� ��ġ�� ���δ�.\n");
		Pass(pos);
		setcolor(3);
		system("cls");
		printf("\n\t��� �ұ�?\n");
		while (1)
		{
			static int posshammer = 0;
			static int posspipe = 0;
			static int posswire = 0;
			
			static int end = 0;

			printf("\t1. ���� ��ġ�� ����Ѵ�     2. ������ ��ƴ���     3. �������� ��ƴ���     4. �ƹ��͵� ���� �ʴ´�\n\t");
			scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				printf("���� ��ġ�� ���� �����.\n");
				posshammer = 1;
				Pass(pos);
				system("cls");
				printf("\n\t���� ��ġ�� ������ �ұ�?\n");
				if (posspipe == 1 && posswire == 1)
				{
					printf("\t1. ������ ������ ��Ÿ�Ѵ�    2. ���� ���� ������    3. �ƹ��͵� ���� �ʴ´�    4. ������ ������ ���� �������� �Ŵ޸���    5. ������ ������ ���� ������ ���� ��ٴ�    6. ���� ������ ��ٴ�    7. ������ ������ ���� �������� �Ŵ޸� �� ������ ���� ����߸���\n\t");
				}
				else if (posspipe == 1)
				{
					printf("\t1. ������ ������ ��Ÿ�Ѵ�    2. ���� ���� ������    3. �ƹ��͵� ���� �ʴ´�    4. ������ ������ ���� �������� �Ŵ޸���\n\t");
				}
				else if (posswire == 1)
				{
					printf("\t1. ������ ������ ��Ÿ�Ѵ�    2. ���� ���� ������    3. �ƹ��͵� ���� �ʴ´�    6. ���� ������ ��ٴ�\n\t");
				}
				else printf("\t1. ������ ������ ��Ÿ�Ѵ�    2. ���� ���� ������    3. �ƹ��͵� ���� �ʴ´�\n\t");

				scanf("%d", &choice);

				switch (choice)
				{
				case 1:
					printf("�������� ������ ������ ���İ��� ���� ���Դ�.\n");
					Pass(pos);
					printf("����� ���� �Ǿ���.\n");
					Pass(pos);
					exit(0);
				case 2:
					printf("���� ���� ������ �ƹ� �ϵ� �Ͼ�� �ʾҴ�.\n");
					Pass(pos);
					printf("\n");
					break;
				case 3:
					printf("�ƹ��͵� ���� �ʾҴ�.\n");
					Pass(pos);
					printf("\n");
					break;
				case 4:
					if (posspipe == 1)
					{
						printf("�������� ������ ������ ���� ������ �����ߴ�.\n");
						Pass(pos);
						printf("�绡�� �������� �Ŵ޷� ���� ���ߴ�.\n");
						Pass(pos);
						setcolor(12);
						printf("���� �ȿ� ���� ������.\n");
						Pass(pos);
						printf("�ᱹ �������� ��ġ�� ���� ��������.\n");
						Pass(pos);
						printf("����� ���� �Ǿ���.\n");
						Pass(pos);
						setcolor(3);
						exit(0);
					}
					else
					{
						printf("�ļ� �θ��� ������.\n");
						Pass(pos);
					}
				case  5:
					if (posswire == 1)
					{
						printf("���� ��ġ�� �������� ������ ���� ������ ���� �㱸����.\n");
						Pass(pos);
						setcolor(12);
						printf("������\n");
						Pass(pos);
						printf("���⿡ ��������.\n");
						setcolor(3);
						Pass(pos);
						exit(0);
					}
					else {
						printf("�ļ� �θ��� ������.\n");
						Pass(pos);
					}
				case 6:
					if (posswire == 1)
					{
						printf("�귯������ ���� ������ �㱸����.\n");
						Pass(pos);
						setcolor(12);
						printf("����\n");
						Pass(pos);
						printf("�����Ǿ����� ������ ������ �ʾҴ�.\n");
						setcolor(3);
						Pass(pos);
						printf("�����ؾ߰ڴ�.\n");
						Pass(pos);
						printf("��? �� �������� ������ ���� �׾���.\n");
						Pass(pos);
						printf("�̰� Ȱ���� �� ���� �� ����.\n");
						Pass(pos);
						printf("\n");
					}
					else {
						printf("�ļ� �θ��� ������.\n");
						Pass(pos);
					}
					break;
				case 7:
					if (posswire == 1 && posspipe == 1)
					{
						printf("������ ������ ���� �������� �з� ���Դ�.\n");
						Pass(pos);
						printf("�绡�� �������� �Ŵ޷� �������� ���ߴ�.\n");
						Pass(pos);
						printf("�׸��� ������ ������ ����߷ȴ�.\n");
						Pass(pos);
						setcolor(12);
						printf("������������\n");
						setcolor(3);
						Pass(pos);
						printf("��� �������� �����Ǿ� �׾���.\n");
						Pass(pos);
						setcolor(12);
						printf("���� �ȿ� ���� ������.\n");
						Pass(pos);
						printf("�ᱹ ���� ��������.\n");
						Pass(pos);
						setcolor(3);
						Sleep(2000);
						printf("��..������ ������ ���� �� �ϴ�.\n");
						Pass(pos);
						printf("���� ��ġ�� ���� �������� ������ ���� �ڿ� �ִ� ������ ����.\n");
						Pass(pos);
						printf("������ ���� �����ִ� ��, �ⱸ�� ���ȴ�.\n");
						Pass(pos);
						printf("���� �̰����� ����������.\n");
						end = 1;
						Pass(pos);
					}
					else {
						printf("�ļ� �θ��� ������.\n");
						Pass(pos);
					}
						break;
					
				default:
					printf("�߸� �Է��߽��ϴ�\n");
					Pass(pos);
					printf("\n");
				}
				break;
			case 2:
				printf("������ ��ƴ����� ������ ������.\n");
				posswire = 1;
				Pass(pos);
				printf("������ �����Ǿ� �ִ�.\n");
				Pass(pos);
				printf("���� ������ ���Ⱑ ���ϴ� �� ����.\n");
				Pass(pos);
				printf("���� ������ �����ؾ߰ڴ�.\n");
				Pass(pos);
				printf("\n");
				break;
			case 3:
				printf("�������� ��ƴ���.\n");
				Pass(pos);
				printf("�������� ������ �ʾ����� ��� ���� �����Դ�.\n");
				Pass(pos);
				printf("�����ϸ� ����� ���� �� ���� �� ����.\n");
				Pass(pos);
				printf("ưư�ϰ� �����־� �Ŵ޷��� ������ �� ����.\n");
				Pass(pos);
				posspipe = 1;
				printf("\n");
				break;
			case 4:
				printf("�ƹ��͵� ���� �ʾҴ�.\n");
				Pass(pos);
				printf("\n");
				break;
			default:
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
				Pass(pos);
				printf("\n");
			} // end switch
			if (end == 1) break;
		} 
	}
	system("cls");
	setcolor(7);
	printf("�� �������� ������ �� �ٸ� ���������� ���δ�.\n");
	Pass(pos);
	printf("����ü �󸶳� �� ���� �̰����� Ż���� �� ������...\n");
	Pass(pos);
	printf("������ ���� ���ʿ� ��¡����� �ִ� �������� �ִ�.\n");
	pos = 4;
	Pass(pos);
	printf("��¡�� ������ ������ ���� �������� �ִ�.\n");
	Pass(pos);
	printf("Ȥ�� �𸣴� ì�ܵ���.\n");
	Pass(pos);
	system("cls");
	printf("�� ������ ���߼��� õ���� ���� �� �������� ���δ�\n");
	pos = 5;
	Pass(pos);
	printf("������ �ȿ��� �� ������ �������� ���δ�.\n");
	Pass(pos);
	printf("�������� ��ġ���� ������ ��� �ִ�.\n");
	Pass(pos);
	printf("�������� õ���� ���� �� ���� ����� �� ������ ���⸦ �θ��� ���̾��� �� ����.\n");
	Pass(pos);
	printf("�������� ��ٸ��� Ÿ�� �ö� �������� �ڼ��� ���Ҵ�.\n");
	Pass(pos);
	printf("�������� ��ġ���� ĥ ������ �� �Ҹ��� ���� �� �Ŀ� ��ġ�� �ȿ��� ���𰡰� ƨ��� �Ҹ��� ����.\n");
	Pass(pos);
	printf("��ġ���� ��� ������ ������ ������� ����� �׸��ڰ� �����.\n");
	Pass(pos);
	printf("�Ƹ� �� ��������� ���� ���� ������հ� ���� ���ΰ� ����.\n");
	Pass(pos);
	printf("�� ��������� ���� ����� ã�ƺ���.\n");
	Pass(pos);
	printf("������ ������ �������� �Ÿ��� �� 2���� ���� �� ���δ�.\n");
	Pass(pos);
	printf("�ֺ��� ���� ������?\n");
	Pass(pos);
	printf("��ٸ����� ������ ������ �� ������ ������ ����, �׹�, �� ö ���밡 �ִ�.\n");
	Pass(pos);
	printf("�ϴ� �� ������ ����.\n");
	Pass(pos);
	system("cls");
	printf("�������� ��¡� ��� �Դ´ٰ� �����.\n");
	Pass(pos);
	while (1)
	{
		pos = 6;
		system("cls");
		static int posscuttlefish = 0;
		static int useditem = 0;
		static int possrope = 1;
		static int possnet = 1;
		static int possstick = 1;

		static int end = 0;
		system("cls");
		printf("\n\t��� �ұ�?\n");
		if (posscuttlefish == 1)
		{
			switch (useditem)
			{
			case 1:
				if (possnet == 0 && possstick == 0) printf("\t1. ���� �������� ����    3. ��¡�� ���������� ����    5. ���� ��ġ�� ���� �������� ������ ����    6. ��¡� ���� ���� ���� �������� ������\n");
				else if (possnet == 0) printf("\t1. ���� �������� ����    3. ��¡�� ���������� ����    4. ö ����� ������ �����Ѵ�    5. ���� ��ġ�� ���� �������� ������ ����    6. ��¡� ���� ���� ���� �������� ������\n");
				else if (possstick == 0) printf("\t1. ���� �������� ����    2. �׹��� ������ ���´�    3. ��¡�� ���������� ����    5. ���� ��ġ�� ���� �������� ������ ����    6. ��¡� ���� ���� ���� �������� ������\n");
				else printf("\t1. ���� �������� ����    2. �׹��� ������ ���´�    3. ��¡�� ���������� ����    4. ö ����� ������ �����Ѵ�    5. ���� ��ġ�� ���� �������� ������ ����    6. ��¡� ���� ���� ���� �������� ������\n");
				break;
			case 2:
				if (possrope == 0 && possstick == 0) printf("\t1. ���� �������� ����    3. ��¡�� ���������� ����    5. ���� ��ġ�� ���� �������� ������ ����     7. ��¡� ����ִ� �׹��� ���� �������� ������\n");
				else if (possrope == 0) printf("\t1. ���� �������� ����    3. ��¡�� ���������� ����    4. ö ����� ������ �����Ѵ�    5. ���� ��ġ�� ���� �������� ������ ����     7. ��¡� ����ִ� �׹��� ���� �������� ������\n");
				else if (possstick == 0) printf("\t1. ���� �������� ����    3. ��¡�� ���������� ����    5. ���� ��ġ�� ���� �������� ������ ����     7. ��¡� ����ִ� �׹��� ���� �������� ������\n");
				else printf("\t1. ���� �������� ����    2. �׹��� ������ ���´�    3. ��¡�� ���������� ����    4. ö ����� ������ �����Ѵ�    5. ���� ��ġ�� ���� �������� ������ ����    7. ��¡� ����ִ� �׹��� ���� �������� ������\n");
				break;
			case 3:
				if (possrope == 0 && possnet == 0) printf("\t1. ���� �������� ����    3. ��¡�� ���������� ����    5. ���� ��ġ�� ���� �������� ������ ����    8. ��¡� �������ִ� ö ���븦 ���� �������� ������\n");
				else if (possrope == 0) printf("\t1. ���� �������� ����    2. �׹��� ������ ���´�    3. ��¡�� ���������� ����    5. ���� ��ġ�� ���� �������� ������ ����    8. ��¡� �������ִ� ö ���븦 ���� �������� ������\n");
				else if (possnet == 0) printf("\t1. ���� �������� ����    3. ��¡�� ���������� ����    5. ���� ��ġ�� ���� �������� ������ ����    8. ��¡� �������ִ� ö ���븦 ���� �������� ������\n");
				else printf("\t1. ���� �������� ����    2. �׹��� ������ ���´�    3. ��¡�� ���������� ����    5. ���� ��ġ�� ���� �������� ������ ����    8. ��¡� �������ִ� ö ���븦 ���� �������� ������\n");
				break;
				//printf("\t1. ���� �������� ����    2. �׹��� ������ ���´�    3. ��¡�� ���������� ����    5. ���� ��ġ�� ���� �������� ������ ����    8. ��¡� �������ִ� ö ���븦 ���� �������� ������\n");
			}
		}
		else printf("\t1. ���� �������� ����    2. �׹��� ������ ���´�    3. ��¡�� ���������� ����    4.ö ����� ������ �����Ѵ�    5. ���� ��ġ�� ���� �������� ������ ����\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("���� �������� ����.\n");
			Pass(pos);
			printf("�������� ��� ���� Ƣ��� ��Ҵ�.\n");
			Pass(pos);
			printf("�������� ���� ������ �ص� �������� �ʹ� ���� �������� ���� �� ����.\n");
			Pass(pos);
			printf("�׳� ���������� �������� �ߴ�.\n");
			Pass(pos);
			setcolor(12);
			printf("��ø�...���������� ������ ��ٸ��� ����.\n");
			Pass(pos);
			printf("���� ������ ������ ���� �� ������ ������ �� ������ ���� ������ �ʴ´�.\n");
			Pass(pos);
			printf("������.\n");
			Pass(pos);
			exit(0);
		case 2:
			if (useditem != 2 && possnet == 1)
			{
				printf("�׹��� �������� ������.\n");
				Pass(pos);
				printf("�������� �׹� ������ ���� �ʴ´�.\n");
				Pass(pos);
				printf("�ٽ� �׹��� �Ⱦ�÷ȴ�.\n");
				Pass(pos);
			}
			else {
				printf("�ļ� �θ��� ������.\n");
				Pass(pos);
			}
			break;
		case 3:
			if (posscuttlefish == 0)
			{
				printf("��¡�� ���������� ����.\n");
				pos = 4;
				Pass(pos);
				system("cls");
				printf("\n\t������ �ұ�?\n");
				printf("\t1. ���� ��ġ�� ��¡�� ������ ������ ����    2. ö ����� ��¡�� �������� ��Ÿ�Ѵ�    3. ���� ���������� ���ư���\n");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					printf("���׶�\n");
					Pass(pos);
					setcolor(12);
					printf("���� ������ Ƣ�� �տ� ��ó�� �Ծ���.\n");
					Pass(pos);
					setcolor(7);
					printf("�׷��� ū ��ó�� �ƴ����� �ǰ� ����.\n");
					Pass(pos);
					printf("��¡�� ������ ������ ������.\n");
					Pass(pos);
					printf("��¡�� ���������� ���� ������.\n");
					Pass(pos);
					printf("�� ��¡��鵵 ���� ���� ���Դ�.\n");
					Pass(pos);
					system("cls");
					printf("\n\t������ �ұ�?\n");
					if (possrope == 1 && possnet == 1 && possstick) printf("\t1. ���ٷ� ��¡� ���´�    2. �׹��� ��¡� �ִ´�    3. ö ���뿡 ��¡� �����\n");
					else if (possrope == 1 && possnet == 1) printf("\t1. ���ٷ� ��¡� ���´�    2. �׹��� ��¡� �ִ´�\n");
					else if (possrope == 1 && possstick == 1) printf("\t1. ���ٷ� ��¡� ���´�    3. ö ���뿡 ��¡� �����\n");
					else if (possnet == 1 && possstick == 1) printf("\t2. �׹��� ��¡� �ִ´�    3. ö ���뿡 ��¡� �����\n");
					else if (possrope == 1) printf("\t1. ���ٷ� ��¡� ���´�.\n");
					else if (possnet == 1) printf("\t2. �׹��� ��¡� �ִ´�.\n");
					else if (possstick == 1) printf("\t2. ö ���뿡 ��¡� �����.\n");
					else
					{
						printf("\t�߸� �Է��ϼ̰ų� ��¡� ������ ������ �����ϴ�.\n");
						break;
					}
					scanf("%d", &choice);
					switch (choice)
					{
					case 1:
						if (useditem != 1 && possrope == 1)
						{
							printf("���ٿ� �� ��¡� ������.\n");
							posscuttlefish = 1;
							useditem = 1;
							Pass(pos);
							printf("���� ���������� ���ư���.\n");
							Pass(pos);
						}
						else {
							printf("�ļ� �θ��� ������.\n");
							Pass(pos);
						}
						break;
					case 2:
						if (useditem != 2 && possnet == 1)
						{
							printf("�׹��� �� ��¡� �־���.\n");
							posscuttlefish = 1;
							useditem = 2;
							Pass(pos);
							printf("���� ���������� ���ư���.\n");
							Pass(pos);
						}
						else {
							printf("�ļ� �θ��� ������.\n");
							Pass(pos);
						}
						break;
					case 3:
						if (useditem != 3 && possstick == 1)
						{
							printf("ö ���뿡 �� ��¡� �����־���.\n");
							posscuttlefish = 1;
							useditem = 3;
							Pass(pos);
							printf("���� ���������� ���ư���.\n");
							Pass(pos);
						}
						else {
							printf("�ļ� �θ��� ������.\n");
							Pass(pos);
						}
						break;
					default:
						printf("�߸� �Է��ϼ̽��ϴ�\n");
					}
					break;
				case 2:
					if (useditem != 3 && possstick == 1)
					{
						printf("���׶�\n");
						Pass(pos);
						setcolor(12);
						printf("���� ������ Ƣ�� �տ� ��ó�� �Ծ���.\n");
						Pass(pos);
						setcolor(7);
						printf("�׷��� ū ��ó�� �ƴ����� �ǰ� ����.\n");
						Pass(pos);
						printf("��¡�� ������ ������ ������.\n");
						Pass(pos);
						printf("��¡�� ���������� ���� ������.\n");
						Pass(pos);
						printf("�� ��¡��鵵 ���� ���� ���Դ�.\n");
						Pass(pos);
						system("cls");
						printf("\n\t������ �ұ�?\n");
						if (possrope == 1 && possnet == 1 && possstick) printf("\t1. ���ٷ� ��¡� ���´�    2. �׹��� ��¡� �ִ´�    3. ö ���뿡 ��¡� �����\n");
						else if (possrope == 1 && possnet == 1) printf("\t1. ���ٷ� ��¡� ���´�    2. �׹��� ��¡� �ִ´�\n");
						else if (possrope == 1 && possstick == 1) printf("\t1. ���ٷ� ��¡� ���´�    3. ö ���뿡 ��¡� �����\n");
						else if (possnet == 1 && possstick == 1) printf("\t2. �׹��� ��¡� �ִ´�    3. ö ���뿡 ��¡� �����\n");
						else if (possrope == 1) printf("\t1. ���ٷ� ��¡� ���´�.\n");
						else if (possnet == 1) printf("\t2. �׹��� ��¡� �ִ´�.\n");
						else if (possstick == 1) printf("\t2. ö ���뿡 ��¡� �����.\n");
						else
						{
							printf("\t�߸� �Է��ϼ̰ų� ��¡� ������ ������ �����ϴ�.\n");
							break;
						}
						scanf("%d", &choice);
						switch (choice)
						{
						case 1:
							if (useditem != 1 && possrope == 1)
							{
								printf("���ٿ� �� ��¡� ������.\n");
								posscuttlefish = 1;
								useditem = 1;
								Pass(pos);
								printf("���� ���������� ���ư���.\n");
								Pass(pos);
							}
							else {
								printf("�ļ� �θ��� ������.\n");
								Pass(pos);
							}
							break;
						case 2:
							if (useditem != 2 && possnet == 1)
							{
								printf("�׹��� �� ��¡� �־���.\n");
								posscuttlefish = 1;
								useditem = 2;
								Pass(pos);
								printf("���� ���������� ���ư���.\n");
								Pass(pos);
							}
							else {
								printf("�ļ� �θ��� ������.\n");
								Pass(pos);
							}
							break;
						case 3:
							if (useditem != 3 && possstick == 1)
							{
								printf("ö ���뿡 �� ��¡� �����־���.\n");
								posscuttlefish = 1;
								useditem = 3;
								Pass(pos);
								printf("���� ���������� ���ư���.\n");
								Pass(pos);
							}
							else {
								printf("�ļ� �θ��� ������.\n");
								Pass(pos);
							}
							break;
						default:
							printf("�߸� �Է��ϼ̽��ϴ�\n");
						}
					}
					else {
						printf("�ļ� �θ��� ������.\n");
						Pass(pos);
					}
					break;
				}
			}
			else {
				printf("�ļ� �θ��� ������.\n");
				Pass(pos);
			}
			break;
		case 4:
			if (useditem != 3 && possstick == 1)
			{
				printf("ö ����� ������ �����ߴ�.\n");
				Pass(pos);
				printf("������ ö ���뿡 ��� ��ó�� �԰� �Ǹ� ��ȴ�.\n");
				Pass(pos);
				printf("�������� ������ ���ߴ�.\n");
				Pass(pos);
				printf("�������� ���� ������ �ٴ� �������� �������� ����� ���� ���� ���� ���� �ö���� �ʰ� �ߴ�.\n");
				Pass(pos);
				setcolor(12);
				printf("������.\n");
				Pass(pos);
				exit(0);
			}
			else {
				printf("�ļ� �θ��� ������.\n");
				Pass(pos);
			}
			break;
		case 5:
			printf("���� ��ġ�� ������ ������ ��Ÿ�ߴ�.\n");
			Pass(pos);
			printf("�������� ���������� �� �Ҹ��� �� �� �ݵ� ���� �ʾҴ�.\n");
			Pass(pos);
			setcolor(12);
			printf("�������� ������ ���ߴ�.\n");
			Pass(pos);
			printf("�������� ���� ������ �ٴ� �������� �������� ����� ���� ���� ���� ���� �ö���� �ʰ� �ߴ�.\n");
			Pass(pos);
			printf("������.\n");
			Pass(pos);
			exit(0);
		case 6:
			if (useditem == 1)
			{
				printf("��¡����� ���� ���� ���� �������� ���ȴ�.\n");
				Pass(pos);
				printf("�������� ��¡� ������ ������.\n");
				Pass(pos);
				printf("�������� ��ġ���� ƨ��鼭 ��¡� ���� �� ������ �Դ�.\n");
				Pass(pos);
				printf("�������� �� ������ �� �� ��ġ���� ���� �ΰ� ��¡� �Ա� �����ߴ�.\n");
				Pass(pos);
				system("cls");
				printf("\n\t��� �ұ�?\n");
				if (possnet == 1 && possstick == 1) printf("\t1. �׹��� ������ ���´�    2. ö ����� ��ġ���� ������ �����    3. ö ���뿡 �׹��� ���´�    4. �׹��� ��ġ���� ���´�\n");
				else if (possnet == 1) printf("\t1. �׹��� ������ ���´�    4. �׹��� ��ġ���� ���´�\n");
				else if (possstick == 1) printf("\t2. ö ����� ��ġ���� ������ �����    3. ö ���뿡 �׹��� ���´�\n");
				else printf("\t5. �� ������ �� ��ġ���� ������ �´�\n");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					printf("�� ������ �׹��� ����.\n");
					Pass(pos);
					printf("�� ������ �׹��� ������ �ٸ� �������� �׹��� ���� �� ������ �׹����� ������ �ߴ�.\n");
					Pass(pos);
					printf("�׹��� ���� ���� �� ����� �� ����.\n");
					possnet = 0;
					Pass(pos);
					break;
				case 2:
					printf("ö ����� ��ġ���� ������ ������� ������ ���� �̲����� ö ���븦 ����߸��� ���Ҵ�.\n");
					possstick = 0;
					Pass(pos);
					break;
				case 3:
					printf("ö ���뿡 �׹��� ������.\n");
					Pass(pos);
					printf("�̰Ŷ�� �ָ� �ִ� �͵� ���� �� ���� �� ����.\n");
					Pass(pos);
					system("cls");
					printf("\n\t��� �ұ�?\n");
					printf("\t1. ö ����⿡ ���� �׹��� ������ ���´�    2. ö ����⿡ ���� �׹��� ��ġ���� ���´�\n");
					scanf("%d", &choice);
					switch (choice)
					{
					case 1:
						printf("�׹� �ȿ� ������ ����.\n");
						Pass(pos);
						setcolor(12);
						printf("������ �����ǿ�⸦ �����ߴ�.\n");
						Pass(pos);
						printf("������ �̸����� �����̸� �׹��� ����.\n");
						Pass(pos);
						printf("�׹��� ������� �׹��� ����ִ� ���� �� ������ �������ȴ�.\n");
						Pass(pos);
						printf("�� �ʹ� ��� ���� ���������� �������� �ߴ�.\n");
						Pass(pos);
						printf("�׷��� ���������� ������ ��ٸ��� ������.\n");
						Pass(pos);
						printf("������.\n");
						Pass(pos);
						exit(0);
					case 2:
						printf("ö ����⿡ ���� �׹��� ��ġ���� ���Ҵ�.\n");
						Pass(pos);
						printf("������ �������� ������ ��¡� �԰� �־���.\n");
						Pass(pos);
						printf("��ġ���� ����ø��� ������ ��ٸ����� �����Դ�.\n");
						end = 1;
						Pass(pos);
						break;
					default:
						printf("�߸� �Է��ϼ̽��ϴ�.\n");
						Pass(pos);
					}
					break;
				case 4:
					printf("�׹��� ��ġ���� ������ ������ ��ġ���� �ʹ� �ָ� �־� ���� �ʾҴ�.\n");
					Pass(pos);
					break;
				case 5:
					printf("ǳ��\n");
					Pass(pos);
					printf("�� ������ ����.\n");
					Pass(pos);
					printf("������ �ؼ� ��ġ���� ��Ҵ�.\n");
					Pass(pos);
					setcolor(12);
					printf("�ٽ� �ö󰡷� ������ ���� �ö󰡴� ��ٸ��� ����.\n");
					Pass(pos);
					printf("������.\n");
					Pass(pos);
					exit(0);
				default:
					printf("�߸� �Է��ϼ̽��ϴ�.\n");
					Pass(pos);
				}
			}
			else {
				printf("�ļ� �θ��� ������.\n");
				Pass(pos);
			}
			Pass(pos);
			break;
		case 7:
			if (useditem == 2)
			{
				printf("��¡����� �� �׹��� ���� �������� ���ȴ�.\n");
				Pass(pos);
				printf("�������� ��¡� ������ ������.\n");
				Pass(pos);
				printf("�������� ��ġ���� Ƣ��鼭 �� ���� ��ġ���� ���� �ΰ� ��¡� �Ա� �����ߴ�.\n");
				Pass(pos);
				system("cls");
				printf("\n\t��� �ұ�?\n");
				printf("\t1. ���� �� ��ġ���� ������ �´�    2. ������ �׹��� ���� ������ ��ٸ���\n");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					printf("���� ���ڸ��� �� ������ ���� �� ������ ���� ���� �˾������� ���� �� �ָ��� ��������.\n");
					Pass(pos);
					printf("������ ���� ���� ���� �� ������ ������ �ߴ�.\n");
					Pass(pos);
					setcolor(12);
					printf("�׷��� ���ڱ� �ٸ��� �㰡 ���鼭 �ٸ��� ���������� �ʾҴ�.\n");
					Pass(pos);
					printf("������.\n");
					Pass(pos);
					exit(0);
				case 2:
					printf("������ �׹��� ���� ������ ��ٷȴ�.\n");
					Pass(pos);
					printf("������ �׹��� ������ Ƣ������⸦ �����ߴ�.\n");
					Pass(pos);
					printf("�� �ݵ����� �׹��� ��� �ִ� ���� �� ������ �������ȴ�.\n");
					Pass(pos);
					printf("���İ��� �Ͼ ���̶� ������ �� ������.\n");
					Pass(pos);
					printf("���� ���� ���� ������ �������� �Ͽ���.\n");
					Pass(pos);
					printf("�׷��� ���� �ö󰡴� ��ٸ��� ����.\n");
					Pass(pos);
					printf("������ �������� 2���� �� �Ǿ� ���� ���� ���� �ʴ´�.\n");
					Pass(pos);
					printf("������.\n");
					Pass(pos);
					exit(0);
				}
			}
			else {
				printf("�ļ� �θ��� ������.\n");
				Pass(pos);
			}
			break;
		case 8:
			if (useditem == 3)
			{
				printf("��¡����� ������ ö ���븦 ���� �������� ���ȴ�.\n");
				Pass(pos);
				printf("�������� ��¡� ������ ������.\n");
				Pass(pos);
				printf("���ڱ� �������� ö ����� ������ ö ���븦 ���� �����ȴ�.\n");
				Pass(pos);
				printf("������ ���� ö ���븦 ���� ���� �������� �ʾҴ�.\n");
				Pass(pos);
			}
			else {
				printf("�ļ� �θ��� ������.\n");
				Pass(pos);
			}
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�\n");
			Pass(pos);
		}
		if (end == 1) break;
	}
	setcolor(7);
		printf("������ ��ٸ����� �����Դ�.\n");
		Pass(pos);
		printf("�Ͼ�...��ģ��..���� �̰����� ������ �ʹ�.\n");
		Pass(pos);
		printf("��ġ���� ��Ʈ������ ���� ������ �ִ� ������հ� ������ ������ �ٸ� ��������� �־���.\n");
		Pass(pos);
		printf("��������� ì��� �ٽ� ���ư���.\n");
		Pass(pos);
		printf("������ ���� �� ū ������ 2���� ���޾� ���Դ�.\n");
		pos = 6;
		Pass(pos);
		system("cls");
		setcolor(2);
		printf("\n\t��� �������� ���� ����?\n");
		printf("\t1. �տ� �ִ� �������� ���� ����    2. �ڿ� �ִ� �������� ���� ����\n");
		scanf("%d", &choice);
		printf("�׳� �տ� �ִ� �������� ���� ����.\n");
		system("cls");
		setcolor(7);
		Pass(pos);
		printf("�տ� �ִ� ���������� ���� ���� ���Ҵ�.\n");
		Pass(pos);
		printf("������ �ٴڿ� �ݰ� ����� ���� �־���.\n");
		Pass(pos);
		printf("�ʹ� �ָ� �־ ��Ȯ�� ���������� �� �� ����.\n");
		Pass(pos);
		setcolor(2);
		system("cls");
		printf("\n\t��� �ұ�?\n");
		printf("\t1. ������ ������ �� �������� ����    2. �� �� �����̳� �ְ���, ���� ����\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("�ѹ� ������.\n");
			Pass(pos);
			break;
		case 2:
			printf("�׳� �ڿ� �ִ� �������̳� ������.\n");
			Pass(pos);
			printf("���̴�. �տ� �ִ� �������� �ȿ� �ִ°� ���� �ʹ� �ñ��ϴ�.\n");
			Pass(pos);
			printf("�ѹ� ������.\n");
			Pass(pos);
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			Pass(pos);
		}
		system("cls");
		printf("�������� ��ٸ��� �ö� ���� ���⿡�� ���������� ���� �ö���� ��ٸ��� �ִ�.\n");
		Pass(pos);
		printf("������.\n");
		Pass(pos);
		printf("�������� �ϳ� ���.\n");
		Pass(pos);
		printf("�������� �ٴڱ��� ������ �ݰ�� ��ȣ���� �ִ�.\n");
		Pass(pos);
		printf("��ȣ�ǿ��� �� + �� / �� - �� x �� = 12 ��� �����ִ�\n");   //  3  5  1  8  9    // 5 8 1 9 3  = 12
		Pass(pos);
		printf("5���� ���ڶ�..���� �Ʊ� �� ���ڵ��� �����غ���.\n");
		Pass(pos);
		printf("���� ������.\n");
		Pass(pos);
		printf("���� �� ��ȣ�� ���߰� �ö���.\n");
		Pass(pos);
		setcolor(10);
		while (1)
		{
			static int opportunity = 3;
			printf("\n\n\t\t�� + �� / �� - �� x �� = 12 \n");
			printf("\t\t12345 ���·� �Է�\n");
			printf("\t\t���� ��ȸ %d��\n\t\t", opportunity);
			scanf("%d", &choice);
			if (choice == 58193)
			{
				break;
			}
			else printf("Ʋ�ȴ�.");
			opportunity--;
			if (opportunity == 0)
			{
				setcolor(12);
				printf("\t\t\t\t\t�ͻ�\n");
				Pass(pos);
				exit(0);
			}
		}
		setcolor(7);
		system("cls");
		printf("��ȣ�� �����.\n");
		Pass(pos);
		printf("�ݰ� �ȿ��� ��ħ���� �ִ�.\n");
		Pass(pos);
		printf("�ű��ϰ� ���� ��ħ���̴�. �Ķ��� ������� ����� �Ǿ��ִ�.\n");
		Pass(pos);
		printf("���� �� ���� �ö���.\n");
		Pass(pos);
		printf("��ħ���� ������ ���������� ���Դ�.\n");
		Pass(pos);
		printf("���ݸ� ���� ����..\n");
		Sleep(3000);
		printf("�ڴٰ� �Ͼ��.\n");
		Pass(pos);
		printf("�ٽ� �������.\n");
		Pass(pos);
		printf("������ �ʹ�.\n");
		Pass(pos);
		system("cls");
		printf("�ڿ� �ִ� ���������� ����.\n");
		pos = 7;
		Pass(pos);
		printf("�� ���������� ������ �־���.\n");
		Pass(pos);
		printf("�� �� ������ �ƴϰ� ���� ���� �� �Ǵ� ���ϴ�.\n");
		Pass(pos);
		printf("��� ������ ���� ���� � ������ �����ִ�.\n");
		Pass(pos);
		printf("��� ���������� ������ �ؼ� ������ ���� ���� ����� �� �� ����.\n");
		Pass(pos);
		system("cls");
		printf("�ϴ� ��� �������� ���캸��.\n");
		Pass(pos);
		printf("������ ������ �ٴ��� �ƴ� �� ���ؿ��� �ݴ��� ����â �߰� �κ��� �޷� �ִ�.\n");
		Pass(pos);
		printf("������ 2 ~ 3���ʹ� �Ǿ� ���δ�.\n");
		Pass(pos);
		printf("���� �������� ���ٸ� �� ������ �� ����.\n");
		Pass(pos);
		printf("������ �տ��� ī�� �� ��, ��Ʈ �� ��, ��â �� ��, ���� �� ���� �ִ�.\n");
		Pass(pos);
		printf("�� �ϳ��� ���⸦ ���� �ϳ� �� ������ �� �ִ�.\n");
		Pass(pos);
		system("cls");
		setcolor(2);
		system("cls");
		printf("\n\t��� �ұ�?\n");
		printf("\t1. ��Ʈ�� ��â�� ��������   2. ��Ʈ�� ������ ��������   3. ī���� ��â�� ��������   4. ī���� ������ ��������\n");
		_rand = rand() % 100 + 1;
		scanf("%d", &choice);
		switch(choice)
		{
		case 1:
			printf("��Ʈ�� ��â�� �����Դ�.\n");
			ichoice = 1;
			Pass(pos);
			break;
		case 2:
			printf("��Ʈ�� ������ �����Դ�.\n");
			ichoice = 2;
			Pass(pos);
			break;
		case 3:
			printf("ī���� ��â�� �����Դ�.\n");
			ichoice = 3;
			Pass(pos);
			break;
		case 4:
			printf("ī���� ������ �����Դ�.\n");
			ichoice = 4;
			Pass(pos);
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			Pass(pos);
		}
		setcolor(3);

		switch (ichoice)
		{
		case 1:
			printf("��� �������� ��Ʈ�� �ٿ�� ��â�� ��� �ö󰬴�.\n");
			Pass(pos);
			printf("��Ʈ�� ���͸� Ű�� �޸��� �����ϴ� ������ ��Ʈ ������ ���� �����ߴ�.\n");
			Pass(pos);
			setcolor(12);
			printf("�� �� �޷���� ���� ������ �Ͽ���.\n");
			Pass(pos);
			printf("�� �� ��â���� ������� �� ���� ��ó�� �԰� ��������.\n");
			Pass(pos);
			printf("�� ������ ����� �ǰ� ������ �ָ� �ִ� ������� ��Ʈ�� ���� �����ߴ�\n");
			Pass(pos);
			printf("���ڱ� 5���� �� �Ǻ��̴� ū �� ��Ʈ�� ���� �κ��� �þ�԰� ����.\n");
			setcolor(3);
			Pass(pos);
			printf("������ ��� ������� �ʾ����� �� �̻� ������ �������� ���Ѵ�.\n");
			Pass(pos);
			printf("�׸��� ������ �ֺ����� ���� ������ ���δ�.\n");
			Pass(pos);
			system("cls");
			printf("\n\t��� �ұ�?\n");
			printf("\t1. �迡�� ���� ����� ����   2. ��Ʈ ���� �����Ѵ�   3. �ϴ� ��ٸ���\n");
			scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				printf("�迡�� ������ ���� ����.\n");
				Pass(pos);
				printf("������ ������ �����ٴ� ��Ʈ�� ������ ������.\n");
				Pass(pos);
				setcolor(12);
				printf("����..�������� ���󸮴�.\n");
				Pass(pos);
				printf("�����տ��� �ǰ� �帣�� �־���.\n");
				Pass(pos);
				printf("��¡�� �������� ������ ���� �� ���� ��ó����.\n");
				Pass(pos);
				printf("������ ���İ��� ������ �Դ�.\n");
				Pass(pos);
				printf("������.\n");
				Pass(pos);
				exit(0);
			case 2:
				printf("��Ʈ ���� �����ߴ��� ��Ż���� �߰��ߴ�.\n");
				Pass(pos);
				printf("��Ʈ �ٴڿ� �Ķ��� ��Ż�� ��Ҵ�.\n");
				Pass(pos);
				printf("������ ��Ȳ�� ��Ż�� ��Ҵ�.\n");
				Pass(pos);
				printf("��Ż�� ���� �־� ������ ����.\n");
				Pass(pos);
				printf("���� �����ִ� ���� ���ȴ�.\n");
				Pass(pos);
				printf("��Ż������ ���� �� �տ� ��Ȳ�� ��Ż�� ��� �Ķ��� ��Ż�� ���� ���������� ���Դ�.\n");
				Pass(pos);
				printf("��Ż�ǿ� ���� �ణ ������ ���������� �Ÿ���.\n");
				Pass(pos);
				printf("�ٽ� ����� ���� ���� �� ����.\n");
				Pass(pos);
				break;
			case 3:
				printf("�ϴ��� ��ٸ��鼭 ��� ���� �����ϰ� �־���.\n");
				Pass(pos);
				setcolor(12);
				printf("���ڱ� �Ʊ� ��Ʈ�� ���� �κ��� �þ�Ծ��� �� �� ���� �߽ɺκ��� ������.\n");
				Pass(pos);
				printf("��Ʈ�� �ٷ� �μ��� ������ ���� ���� ������.\n");
				Pass(pos);
				printf("������ ������ �����ٴ� ��Ʈ�� ������ ������.\n");
				Pass(pos);
				printf("����..�������� ���󸮴�.\n");
				Pass(pos);
				printf("�����տ��� �ǰ� �帣�� �־���.\n");
				Pass(pos);
				printf("��¡�� �������� ������ ���� �� ���� ��ó����.\n");
				Pass(pos);
				printf("������ ���İ��� ������ �Դ�.\n");
				Pass(pos);
				printf("������.\n");
				Pass(pos);
				exit(0);
			case 4:
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
				Pass(pos);
			}
			Pass(pos);
			break;
		case 2:
			printf("\n\t��Ʈ�� Ÿ�� ���� ���� �������� ������ ������?\n");
			printf("\t1. ���    2. �� ���\n");
			scanf("%d", &choice);
			printf("��\n");
			Pass(pos);
			if (choice == 1)
			{
				if (_rand + 1 <= 20)
				{
					printf("�ѿ� ���� ������ �������\n");
					Pass(pos);
					printf("�����ִ� ���� ���ȴ�.\n");
					Pass(pos);
				}
				else if (_rand >= 30 && _rand <= 50)
				{
					setcolor(12);
					printf("������ �ѿ� �°� ��������.\n");
					Pass(pos);
					printf("������.\n");
					Pass(pos);
					exit(0);
				}
				else {
					printf("�Ѿ��� ��������.\n");
					Pass(pos);
				}
			}
			system("cls");
			printf("�׳� ����.\n");
			Pass(pos);
			printf("��� �������� ��Ʈ�� �ٿ�� ������ ��� �ö󰬴�.\n");
			Pass(pos);
			printf("������ ��Ʈ �ֺ����� �𿩵����.\n");
			Pass(pos);
			printf("�������� �� �ֺ��� ���� ��� ������ ������ ��� ��������.\n");
			Pass(pos);
			printf("�����Ӱ� �̷������ �ߴ��� ��Ʈ�� ���ᰡ �� �޾Ҵ�.\n");
			Pass(pos);
			printf("�������� �߰� �뿡�� ���� ���̶� ������ ������ �ڷ� ���ư� ���� ����.\n");
			Pass(pos);
			printf("������ �� ��Ʈ�� ���� �ٰ����� �ִ�.\n");
			Pass(pos);
			printf("�Ѿ˵� 6�� �ۿ� ���� �ʾ� �� ����� �� ����.\n");
			Pass(pos);
			system("cls");
			printf("\n\t��� �ұ�?\n");
			printf("\t1. ���� �Ѿ� 6���� ���� ������ ���    2. ���� �Ѿ˷� ������ ��´�\n");
			scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				for (int i = 0; i < 6; i++)
				{
					printf("%d��° �Ѿ�", i);
					if (_rand <= 20)
					{
						printf("�ѿ� ���� ������ �������\n");
						Pass(pos);
						printf("�����ִ� ���� ���ȴ�.\n");
						Pass(pos);
					}
					else if (_rand >= 30 && _rand <= 55)
					{
						setcolor(12);
						printf("������ �ѿ� �°� ��������.\n");
						Pass(pos);
						printf("������.\n");
						Pass(pos);
						exit(0);
					}
					else {
						printf("�Ѿ��� ��������.\n");
						Pass(pos);
					}
				}
				break;
			case 2:
				printf("������ ��Ʈ�� ������ �޷��� ������ ���� ����.\n");
				Pass(pos);
				printf("������ ���� ���� ���� 1�����̴�.\n");
				Pass(pos);
				printf("�Ѿ��� �� ����ߴ�.\n");
				Pass(pos);
				printf("������ �޷���� ��Ʈ�� ������.\n");
				Pass(pos);
				printf("�ᱹ ��Ʈ�� �μ����� ���� ���� ������ ���.\n");
				Pass(pos);
				printf("����..�������� ���󸮴�.\n");
				Pass(pos);
				printf("�����տ��� �ǰ� �帣�� �־���.\n");
				Pass(pos);
				printf("��¡�� �������� ������ ���� �� ���� ��ó����.\n");
				Pass(pos);
				printf("������ ���İ��� ������ �Դ�.\n");
				Pass(pos);
				printf("������.\n");
				Pass(pos);
				exit(0);
			default:
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
				Pass(pos);
			}
			break;
		case 3:
			printf("��� �������� ī���� �ٿ�� ��â�� ��� �ö󰬴�.\n");
			Pass(pos);
			printf("ī���� Ÿ�ڸ��� �� ��� ������ �븦 ���� ���İ��� ������ �ִ� ������ �����ߴ�.\n");
			Pass(pos);
			printf("���� ������ ���� ���� �� �� ī���� �� �ϳ��� �����.\n");
			Pass(pos);
			printf("�� �ϳ��� �븦 ���� �ִµ� �� ��θ� �ϴ� �谡 ���ڸ����� ����.\n");
			Pass(pos);
			system("cls");
			printf("\n\t��� �ұ�?\n");
			printf("\t1. ���� �ڱ⺸�� ū ���� �������� �ʴ´ٰ� �ߴ�, ���� ���� ���� ���� ���� ������    2. ��â���� ������ �������Ѵ�\n\t");
			scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				printf("���� ���� ���� ���� ���� ������.\n");
				Pass(pos);
				printf("�� ������ ���� �ʴµ� �ߴ�.\n");
				Pass(pos);
				printf("���ڱ� 5���� �� �Ǵ� ū �� ����ĿԴ�.\n");
				Pass(pos);
				setcolor(12);
				printf("������.\n");
				Pass(pos);
				exit(0);
			case 2:
				printf("���ó���� ������ ��â���� �񷶴�.\n");
				Pass(pos);
				printf("2������ �� ��Ҵ�.\n");
				Pass(pos);
				printf("������ �ٸ� ������ ���� ����ߴ�.\n");
				Pass(pos);
				printf("������ ī�� �ֺ��� ���鼭 �� ������ ���� ���� ���ƴ�.\n");
				Pass(pos);
				printf("�谡 ��� ���ȴ�. �� �������� �� ����.\n");
				Pass(pos);
				printf("�ᱹ �谡 ���������� ���� ������.\n");
				Pass(pos);
				printf("�Ƶչٵ� �� ���� �ܿ� �ö�Դ�. �ٽ� ������ �� ����.\n");
				Pass(pos);
				printf("�� �ӿ� �ִ� ���͸��� �����Ǹ鼭 ������ �����Ǿ���.\n");
				Pass(pos);
				setcolor(14);
				printf("����������\n");
				setcolor(3);
				Pass(pos);
				printf("��� ������ �׾���.\n");
				Pass(pos);
				printf("������ ����İ��� ���� ������ ���Դ�.\n");
				Pass(pos);
				printf("�����ִ� ���� ���ȴ�.\n");
				Pass(pos);
				break;
			}
			break;
		case 4:
			printf("��� �������� ī���� �ٿ�� ������ ��� �ö󰬴�.\n");
			Pass(pos);
			printf("ī���� ���� �ִµ� ���ڱ� �� Ƣ��Դ�.\n");
			Pass(pos);
			printf("��¦ ��� ������ ���µ� ī�� �ٴڿ� �� ���ȴ�.\n");
			Pass(pos);
			printf("ī�� �ٴڿ��� ���� ���´�.\n");
			Pass(pos);
			setcolor(12);
			printf("������ ����.\n");
			Pass(pos);
			system("cls");
			printf("\n\t��� �ұ�?\n");
			printf("\t1. ������ �迡 �� ������ ���´�    2. �������� �迡 �� ������ ���´�    3. �⵵�Ѵ�\n");
			scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				printf("�迡�� ������ ������ ���Ҵ�.\n");
				Pass(pos);
				printf("������ �迡 ������ ���ٴ� �� �˾����� �� ����.\n");
				Pass(pos);
				printf("������ ���� �ٴ��� �� ������ ������.\n");
				Pass(pos);
				printf("�� ���� ���� ��� ������ �����ߴ�.\n");
				Pass(pos);
				printf("�ᱹ �谡 ����ɾҴ�.\n");
				Pass(pos);
				printf("������ �´�.\n");
				Pass(pos);
				printf("������.\n");
				Pass(pos);
				exit(0);
			case 2:
				printf("������ �ѱ��� ���ۿ� ������.\n");
				Pass(pos);
				printf("�� �̻� ���� ���� �ʴ´�.\n");
				Pass(pos);
				printf("������ ���ۿ� �������� ���¿����� ���� �� �� ����.\n");
				Pass(pos);
				printf("������ �踦 ��� ��������.\n");
				Pass(pos);
				system("cls");
				printf("\n\t��� �ұ�?\n");
				Pass(pos);
				printf("\t1. ������ ���ۿ��� �� ������ ���    2. �����\n");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					printf("������ ���ۿ��� �� ������ ����.\n");
					Pass(pos);
					printf("������ ���� ���⿡�� �ͼ� �̸����� ���� ��� �� �迡 �� ���ȴ�.\n");
					Pass(pos);
					printf("�� ���� ���� ����.\n");
					Pass(pos);
					printf("�ᱹ �谡 ����ɰ� ���� ������.\n");
					Pass(pos);
					printf("�׵��� �´�.\n");
					Pass(pos);
					printf("������.\n");
					Pass(pos);
					exit(0);
				case 2:
					printf("������ ��� ���ۿ� �������� ü �����.\n");
					Pass(pos);
					printf("���ڱ� � �� �迡 �����ߴ�.\n");
					Pass(pos);
					printf("�谡 ���������� ���� ������.\n");
					Pass(pos);
					printf("������ �´�.\n");
					Pass(pos);
					printf("������\n");
					Pass(pos);
					exit(0);
				}
			case 3:
				printf("������ �����ϰ� �⵵�� �ߴ�.\n");
				Pass(pos);
				printf("������ ��Ʈ�� �����ϴ� �� �����.\n");
				Pass(pos);
				printf("���� �绡�� �븦 ���� ������ ����.\n");
				Pass(pos);
				printf("������ ���� �ٽ� ���ư��� �߿� ���ڱ� ������ �����ؿԴ�.\n");
				Pass(pos);
				printf("���İ��� �谡 �μ����� ���� ������.\n");
				Pass(pos);
				printf("�׵��� �´�.\n");
				Pass(pos);
				printf("������.\n");
				Pass(pos);
				exit(0);
			}
			Pass(pos);
			default:
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			Pass(pos);
		}
		setcolor(7);
		system("cls");
		printf("���� ���� ���� �Ѿ��.\n");
		pos = 8;
		Pass(pos);
		printf("�̰����� �پ��ִ� ���� ������ 4���� ���� ������ ������ �� ���� �ִ�.\n");
		Pass(pos);
		printf("���� ������ ���������� �ö� �� �ִ� ��ٸ��� �ְ� ���� �������� ö���� ���δ�.\n");
		Pass(pos);
		printf("���� ������ 4������ ���� �ٸ� ������ �������� �ִ�.\n");
		Pass(pos);
		printf("�� ���������� ���ڰ� �����ִµ� 1 ���������� ������ �ְ�, 2 ���������� Ű����, 3 ���������� ȫ��, 4 ���������� �������� �ִ�.\n");
		Pass(pos);
		printf("�� 4���� ������ �� �ʿ��� 1���� 4������ ���ڰ� ���� ��ư 4���� �ִ�.\n");
		Pass(pos);
		printf("��ư ������ ");
		Pass(pos);
		setcolor(13);
		printf("������ ���� ������ ���� ���� ���� ����? ");
		Pass(pos);
		setcolor(7);
		printf("�̶�� ������ �ִ�.\n");
		Pass(pos);
		setcolor(2);
		printf("\n\t� ��ư�� ������?\n");
		printf("\t1. 1 ��ư�� ������    2. 2 ��ư�� ������    3. 3 ��ư�� ������    4. 4 ��ư�� ������\n");
		srand((unsigned int)time(NULL));
		int cor = 0;
		_rand = rand() % 100 + 1;
		if (_rand <= 0 && _rand <= 30) cor = 1;
		else if (_rand <= 31 && _rand <= 45) cor = 2;
		else if (_rand <= 46 && _rand <= 70) cor = 3;
		else if (_rand <= 71 && _rand <= 100) cor = 4;

		scanf("%d", &choice);
		
		if (cor == choice)
		{
			printf("�ߺ�\n");
			Pass(pos);
			printf("�����̴�.\n");
			Pass(pos);
			printf("������ �ִ� �������� ������ ö���� ���� ���ȴ�.\n");
			Pass(pos);
			printf("������.\n");
			Pass(pos);
		}
		else {
			printf("�ߺ��Ӻ�\n");
			Pass(pos);
			printf("Your father was....\n");
			Pass(pos);
			setcolor(12);
			printf("���ڱ� ��ư�� ���� ���� ������ ������ ȭ���� ����Դ�.\n");
			Pass(pos);
			printf("ǫ\n");
			Pass(pos);
			exit(0);
		}
		system("cls");
		setcolor(7);
		printf("��ٸ��� Ÿ�� �ö� ������ �ִ� �������� ����.\n");
		pos = 9;
		Pass(pos);
		printf("ö�� �ʸӿ��� ��û���� ū �������� ���δ�.\n");
		Pass(pos);
		printf("��ħ���� ö���� �ʸӸ� ����Ű�� �ִ�.\n");
		Pass(pos);
		printf("������ �Ʒ����� ������ â�� �ִ�.\n");
		Pass(pos);
		printf("���� â���� ��� ���� �� ���Ǿ ���δ�.\n");
		setcolor(14);
		printf("�� ���Ǿ�� ����⸦ ���� �� ����ϴ� â���� â ������ �κп� ū ������ �����Ǿ� �־� ������ ��Ҵٰ� ������ â�� ������ ������.\n");
		setcolor(7);
		Pass(pos);
		printf("���� â���� ��� ��� ���� �����ϰ� �� ���Ǿ ��� ö���� �Ѿ��.\n");
		pos = 10;
		Pass(pos);
		printf("�� �������� ������ ũ�� ö�� �ݴ����� �־ ������ �ʴ´�.\n");
		Pass(pos);
		printf("������ ������ ��� ���δ�.\n");
		Pass(pos);
		printf("��ħ���� 1�� ���� ���� ����Ű�� ������ ��� �ٲ��.\n");
		Pass(pos);
		setcolor(2);
		system("cls");
		printf("\n\t��� �ұ�?\n");
		printf("\t1.����ļ� ö�� �ݴ������� ����     2. ����ļ� ������ �Ʒ��� ��������\n");
		int whale = 0;
		int cramp = rand() % 4000;
		int enemy = rand() % 4;
		int seedoor = 0;
		whale = rand() % 5;
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			system("cls");
			setcolor(11);
			printf("÷��÷��..\n");
			Pass(pos);
			Sleep(2000);
			switch (whale)
			{
			case 0:   // �� ����
				NOwhale:
				printf("��� ����� ����..\n");
				Pass(pos);
				printf("���ڱ� �ٸ��� �㰡 ����.\n");
				Pass(pos);
				printf("�ٸ��� �������غ���.\n");
				Pass(pos);
				Sleep(cramp);
				printf("�㰡 Ǯ���� �ٽ� ���ġ�⸦ �����Ͽ���.\n");
				Pass(pos);
				printf("��� ���� ���� �� ������ ���� ���Ҵ�.\n");
				Pass(pos);
				Sleep(1000);
				printf("������ ������ � ū �� ����� ���� �־���.\n");
				seedoor = 1;
				Pass(pos);
				printf("�� ������ ��������� ���� �� �ִ� Ȩ�� 3���� �ִ�.\n");
				Pass(pos);
				printf("������� �� ���� �����ϴ�.\n");
				Pass(pos);
				printf("�� �Ʒ��� �������� �� �� ����.\n");
				Pass(pos);
				printf("��ħ���� ����Ű�� ������ ����ļ� ����.\n");
				Pass(pos);
				printf("����� ���� �ִµ� ���� �ֺ��� ���ĸ��� ���� �� ��������.\n");
				Pass(pos);
				printf("���� �𸣰����� ������ ���δ�.\n");
				Pass(pos);
				system("cls");
				setcolor(10);
				printf("\n\t��� �ұ�?\n");
				printf("\t1. �� ���Ǿ�� ���ĸ����� ��´�    2. ���ĸ����� ���ϸ鼭 ��ħ���� ����Ű�� ������ ��� ����\n");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					system("cls");
					printf("���ĸ����� �ϳ� �ϳ� �� ��Ҵ�.\n");
					Pass(pos);
					printf("�׷��� ���ĸ����� �幰�幰�ؼ� â�� ���� ü ������ �ʾҴ�.\n");
					Pass(pos);
					printf("���ĸ����� ���� ������ �κб��� �����Դ�.\n");
					Pass(pos);
					printf("�� ���Ǿ ��� ���ĸ����� ������ �ʴ´�.\n");
					Pass(pos);
					setcolor(14);
					printf("\n\t��� �ұ�?\n");
					printf("\t1. �� ���Ǿ ������    2. ������ �� ���Ǿ ���� ���ĸ����� �Ⱦ��\n");
					scanf("%d", &choice);
					switch (choice)
					{
					case 1:
						printf("�� ���Ǿ ������ ���ĸ����� ���ؼ� �ٽ� ����ߴ�.\n");
						Pass(pos);
						break;
					case 2:
						printf("������ ���ĸ��� ��� ������ �Ͽ���.\n");
						Pass(pos);
						setcolor(12);
						printf("���ĸ��� ������ ���ڸ��� ���ĸ��� �˼��� �տ� ��Ҵ�.\n");
						Pass(pos);
						printf("������ �տ������� �¸����� �����鼭 ȣ������ �Դ�.\n");
						Pass(pos);
						printf("������ ��� �������� �پ��� ������������.\n");
						Pass(pos);						
						printf("������.\n");
						Pass(pos);
						exit(0); 
					}
				case 2:
					system("cls");
					printf("���ĸ��� ���ؼ� ��ħ���� ����Ű�� ������ ����ߴ�.\n");
					Pass(pos);
					printf("����� ���� ���� ���ڱ� �ٴ� ���� ��Ÿ����.\n");
					Pass(pos);
					setcolor(13);
					printf("\n\t��� �ұ�?\n");
					printf("\t1. �� ���Ǿ�� �ٴ� ���� �Ӹ��� ���    2. �� ���Ǿ�� ���� ������ ���\n");
					scanf("%d", &choice);
					switch (choice)
					{
					case 1:
						printf("�ٴ� ���� �� ���Ǿ ���ߴ�.\n");
						Pass(pos);
						printf("�ٴ� ���� ���İ��� �� ���� ������.\n");
						Pass(pos);
						printf("������ ������.\n");
						Pass(pos);
						printf("�� ����� ����Ű�� �����߰� ���� ������ �Ҿ��.\n");
						Pass(pos);
						setcolor(12);
						printf("������.\n");
						Pass(pos);
						exit(0);
					case 2:
						printf("�� ���Ǿ ���� ���뿡 �¾Ҵ�.\n");
						Pass(pos);
						printf("���� ������ �Ҹ��� ���� �� ������.\n");
						Pass(pos);
					}
					
				}
				break;
			case 1:  // ������
				system("cls");
				printf("���ġ�� �ִ� ���� ������ �� �������� ��Ÿ����.\n");
				Pass(pos);
				printf("��ó�� ������ ���� ����. ������ ������ ũ��.\n");
				Pass(pos);
				printf("�� ���������� �ʴ´�.\n");
				Pass(pos);
				printf("������ �������� ���� ģ���ϴ�.\n");
				Pass(pos);
				printf("���� �������� �ڱ⸦ �������� �ϴ� ���ϴ�.\n");
				Pass(pos);
				printf("�������� �� ������ ����.\n");
				Pass(pos);
				setcolor(11);
				printf("\n\t��� �ұ�?\n");
				Pass(pos);
				printf("\t1. �������� ���� �� �Ʒ��� ��������     2. �������� �����ϰ� ��� ���� ���� ����� ����\n");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					printf("�������� �Բ� �� �Ʒ��� ��������.\n");
					Pass(pos);
					printf("�������� �������� �ٸ� �������� ���� ���ذ���.\n");
					Pass(pos);
					printf("�׷��� ��� �������� ����..���ڱ� ���𰡰� �� ���� �����Ҵ�.\n");
					Pass(pos);
					printf("������ �ִ� ū �˼�����.\n");
					Pass(pos);
					setcolor(12);
					printf("��տ�¡���.\n");
					setcolor(11);
					Pass(pos);
					printf("��տ�¡��� ���� ������ �Ʒ��� ���� �������� �Ͽ���.\n");
					Pass(pos);
					printf("�������� ���� ��տ�¡��� ���ݹް� �ִ� ���� ���� ��տ�¡��� �����ߴ�.\n");
					Pass(pos);
					printf("�������� �̻��� ��տ�¡���� �˼����� �߶���.\n");
					Pass(pos);
					printf("���� ��� �ִ� �˼��� �߷ȴ�.\n");
					Pass(pos);
					printf("�������� ��տ�¡� �Ծ�ġ����.\n");
					Pass(pos);
					printf("�׸��� ������ �ٽ� �������� �����ߴ�.\n");
					Pass(pos);
					printf("�������� ���� ������ �ٴڱ��� ���������ְ� ��򰡷� �������.\n");
					Pass(pos);
					break;
				case 2:
					printf("����� ���� ���� ���𰡰� �� ���� ������.\n");
					Pass(pos);
					printf("���� ���������� �����̾���. ������ ���ʹ�.\n");
					Pass(pos);
					printf("�� ���� ���� ��ġ�� �� ���� ���� �־���.\n");
					Pass(pos);
					printf("��ġ�� �� ������ �ƴϾ���.\n");
					Pass(pos);
					printf("�� ��ġ�� �� ���� ��� ���� �־��� �ٸ� �� ������ ��ġ���� ������ �޷������.\n");
					Pass(pos);
					setcolor(12);
					printf("����� ���� �Ǿ���.\n");
					Pass(pos);
					exit(0);
				}
				break;
			case 2:  // ����
				system("cls");
				printf("���ġ�� �ִ� ���� �� �ȿ� ���� ū�� ��Ҵ�.\n");
				Pass(pos);
				printf("���� ���� ������ �־���.\n");
				Pass(pos);
				printf("���� ��¦ �����.\n");
				Pass(pos);
				printf("������ ����� �����Ѵٴ� ���� ���� �� �ִ�.\n");
				Pass(pos);
				setcolor(11);
				printf("\n\t��� �ұ�?\n");
				printf("\t1. ������ �����Ѵ�     2. ������ �������� �ʴ´�\n");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					printf("������ �� ���Ǿ�� �����ߴ�.\n");
					Pass(pos);
					printf("������ �� ���Ǿ ��� �Ǹ� �긮�� ��������.\n");
					Pass(pos);
					printf("������ ������ �� �˾����� ������ ������ �����ؿԴ�.\n");
					Pass(pos);
					setcolor(12);
					printf("�������� �����.\n");
					Pass(pos);
					exit(0);
				case 2:
					printf("������ ���� ���� �� �ϴ��� �� �Ʒ��� ��������.\n");
					Pass(pos);
					printf("�� ������ ���� ����.\n");
					Pass(pos);
					printf("������ ���� �� �Ʒ��� �������� ���� �� �ָ��� ������� ��Ÿ����.\n");
					Pass(pos);
					printf("��������� ���� �츮 ������ �Դ�.\n");
					Pass(pos);
					printf("������ ��������� �޷������ �� �Կ� ������� ���ѹ��ȴ�.\n");
					Pass(pos);
					setcolor(14);
					printf("������\n");
					Pass(pos);
					setcolor(11);
					printf("�����Ǵ� �Ҹ��� ���鼭 ������ �� �ʿ��� ���� ����.\n");
					Pass(pos);
					printf("�Ҹ��� ���ߴ��� ������ õõ�� ���� ����ɾҴ�.\n");
					Pass(pos);
					printf("���� ������ ����� �ֵ��� ǥ�ϰ� Ȧ�� �� �Ʒ��� ��������...\n");
					Pass(pos);
				}
				break;
			case 3:  // �ͽŰ�
				printf("���ġ�� �ִ� ���� �� �ָ��� ���� ���� ���ٱⰡ �ھƿþҴ�.\n");
				Pass(pos);
				printf("���ٱⰡ �ھƿ��� ������ ������ �� �ͽŰ��� �־���.\n");
				Pass(pos);
				printf("�ͽŰ��� ���ٱ⸦ �� �� �� ����� �� �Ʒ��� �������� �����ߴ�.\n");
				Pass(pos);
				printf("�� �ͽŰ��� ���� ����.\n");
				Pass(pos);
				printf("�ͽŰ��� �������� �Ʒ��� �������� ������� �Ծ���.\n");
				Pass(pos);
				printf("�ͽŰ��� �� ���� ���� �ö󰡸��� ���� �� �Ʒ��� ��������.\n");
				Pass(pos);
				break;
			case 4:  // ��ũ��
				printf("����� ���� �ִ� ���� �տ� ��ũ���� ������.\n");
				Pass(pos);
				setcolor(11);
				printf("\n\t��� �ұ�?\n");
				printf("\t1. ��ũ���� ���� ź��    2. ��ũ���� ���󰣴�    3. ��ũ���� �����ϰ� ��� ���� ����� ����\n");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					printf("��ũ���� ���� ����.\n");
					Pass(pos);
					printf("��ũ���� �������� �ʾҴ�.\n");
					Pass(pos);
					printf("���� �¿� ��ũ���� ������ �Ʒ��� ���� �����ߴ�.\n");
					Pass(pos);
					printf("�׷��� �������� ���� �ͻ� ������.\n");
					Pass(pos);
					printf("�ͻ��� ���� ���� ��ũ���� ������ �׳� �����ȴ�.\n");
					Pass(pos);
					printf("�Ƹ� �ͻ��� ��ũ���� �̱� �� ���� �׳� �� �� ����.\n");
					Pass(pos);
					break;
				case 2:
					printf("��ũ���� �ڸ� ���󰡸鼭 ������ �Ʒ��� ��������.\n");
					Pass(pos);
					setcolor(12);
					printf("���ڱ� �ͻ� ��Ÿ���� ���� ���� ��ũ���κ��� �ָ� ����߷����Ҵ�.\n");
					Pass(pos);
					printf("�� ������ �� �� �Դ�.\n");
					Pass(pos);
					printf("������.\n");
					Pass(pos);
					exit(0);
				case 3:
					goto NOwhale;
				}
			}
			break;
		case 2:
			printf("������ �Ʒ��� �������� ���� �� �ٴ� �ź��� ������.\n");
			Pass(pos);
			printf("�� ū �ٴ� �ź��ε� ��������� �Ķ������� �������� �׷��� �־���.\n");
			Pass(pos);
			setcolor(11);
			printf("\n\t��� �ұ�?\n");
			printf("\t1. �ٴ� �ź��� ���󰣴�     2. �ٴ� �ź��� �����ϰ� �׳� ��������\n");
			scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				system("cls");
				switch (enemy)
				{
				case 0:  // �� ����
					printf("�ٴ� �ź��� ���� ��� ��������.\n");
					Pass(pos);
					break;
				case 1:  // ����
					printf("�ٴ� �ź��� ���� �Լ� �������� ���� ��� ��Ÿ�� �ٴ� �ź��� �˼��� ����Ҵ�.\n");
					Pass(pos);
					setcolor(13);
					printf("\n\t��� �ұ�?\n");
					printf("\t1. �ٴ� �ź��� ������ ��������    2. ����� �����Ѵ�\n");
					scanf("%d", &choice);
					switch (choice)
					{
					case 1:
						printf("�����ƴ�.\n");
						Pass(pos);
						printf("�ٴ� �ź��� ������ ���� �������� �𸣰ڴ�.\n");
						Pass(pos);
						printf("��..���ڱ� ���� �� ��������.\n");
						Pass(pos);
						printf("������� ��Ұ� �� �޾Ҵ�.\n");
						Pass(pos);
						printf("���� ���� �����´�.\n");
						Pass(pos);
						setcolor(12);
						printf("������.\n");
						Pass(pos);
						exit(0);
					case 2:
						printf("��� �� ���Ǿ�� �񷶴�.\n");
						Pass(pos);
						printf("����� ���������� ū ���ظ� ������ ���� �� ����.\n");
						Pass(pos);
						printf("��� ���� �˼��� ��Ҵ�.\n");
						Pass(pos);
						setcolor(11);
						printf("\n\t��� �ұ�?\n");
						printf("\t1. ������ �� �� �߰� �κ��� �̻��� �����´�     2. ���� ��ġ�� ��� �����Ѵ�\n");
						scanf("%d", &choice);
						switch (choice)
						{
						case 1:
							printf("�̻��� ������ �� �� �߰� �κ��� �̻��� ������� ������ �˼��� ���� Ǯ���鼭 ��� �׾���.\n");
							Pass(pos);
							printf("������ �پ��ִ� �˼��� �ź��̿��� �پ��ִ� �˼��� ����.\n");
							Pass(pos);
							printf("�ٴ� �ź��� ���� �� �Ĵٺ���.\n");
							Pass(pos);
							printf("���� �ٴ� �ź��� �ٽ� ������ ������ �������� �����ߴ�.\n");
							Pass(pos);
							break;
						case 2:
							printf("���� ��ġ�� ������� ��� �����Ϸ��� ������ ������ �˼��� ���� ���� ������ �� ������.\n");
							Pass(pos);
							setcolor(12);
							printf("���� �ٴ� �ź��� ������ �˼��� ���� ü õõ�� �ͻ��ߴ�.\n");
							Pass(pos);
							exit(0);
						}
					}
					printf("\n");
					Pass(pos);
				case 2:  // ������
					printf("�� �ٴ� �źϰ� �Բ� ������ �Ʒ��� �������� �� �������� �ɷȴ�.\n");
					Pass(pos);
					printf("��� ������ �������� �ɷ� �������ü� ����.\n");
					Pass(pos);
					printf("�ٴ� �ź��� ���� �������� �ɸ� �� �˾������� ������ �Դ�.\n");
					Pass(pos);
					printf("�ٴ� �ź��� ������ ������ �ɸ� ���������� �ϳ� �ϳ� �߶��־���.\n");
					Pass(pos);
					printf("���ʷ����� ��� �ڸ��� �ٽ� �������� �����ߴ�.\n");
					break;
				case 3:  // ����
					printf("�ٴ� �źϰ� �������� �ִµ� ���ڱ� �ٴ� �ź��� �����̴� �� �����.\n");
					Pass(pos);
					printf("���� ���ΰ� �ϰ� �ٴ� �źϿ��� ������ �ź����� �� ������ �ɷ��־���.\n");
					Pass(pos);
					setcolor(11);
					printf("\n\t��� �ұ�?\n");
					printf("\t1. �ָӴ�Į�� ������ �ڸ���     2. �ź��̸� ������ ����\n");
					scanf("%d", &choice);
					switch (choice)
					{
					case 1:
						printf("�ָӴ�Į�� ���ɽ��� �ź����� �� �ɷ��ִ� ������ �߶���.\n");
						Pass(pos);
						printf("���� ���ĺ�����.\n");
						Pass(pos);
						printf("�ָӴ�Į�� �־� �����̾���.\n");
						Pass(pos);
						printf("�ٽ� ����Ͽ���.\n");
						Pass(pos);
						break;
					case 2:
						printf("�ź��̰� ������ ���� ã�Ⱑ ��ƴ�.\n");
						Pass(pos);
						printf("���� ã�� ��....\n");
						Pass(pos);
						Sleep(30000);
						printf("���� ã�Ҵ�.\n");
						Pass(pos);
					}
				}
			}
		}
		system("cls");
		setcolor(7);
		Pass(pos);
		printf("�������� ���� �ٴڱ��� ���� �� �������� ������.\n");
		Pass(pos);
		printf("��ħ���� �� �������� ����Ű�� �ִ�.\n");
		Pass(pos);
		printf("�������� ������ �ٴ��� ��� �ɵ���.\n");
		Pass(pos);
		printf("������ ������ �� �� ������ ������ �������� ������ �ٴڿ��� ���� �׸��鼭 ���� �ִٴ� �� �� �� �־���.\n");
		Pass(pos);
		printf("�� ���� �߽����� ���� ������ �ٴ��� �𷡸� �Ⱦ ���� �� ��ΰ� �ִ�.\n");
		Pass(pos);
		printf("�� ��η� ���� � ū ������ ���Դµ� ���� ��û���� �����.\n");
		Pass(pos);
		printf("�װ����� �ϸ���Ʈ, ��� �׸��� �Ƴ븻��ī���� �� ������ �ؾ�������� �־���.\n");
		Pass(pos);
		printf("�׸��� �� ������� ���� ã�� ��������� ������ �־���.\n");
		Pass(pos);
		printf("��������� ������ �� �������� ���Դ�.\n");
		Pass(pos);
		if (seedoor == 0)
		{
			printf("��������� ������� ���� �ö󰡺���.\n");
			Pass(pos);
			printf("������ ���� ������ � ū �� ����� ���� �־���.\n");
			Pass(pos);
			printf("�� �� ������ ��������� ���� �� �ִ� Ȩ�� 3���� �ִ�.\n");
			Pass(pos);
		}
		else {
			printf("�� ������ ���� ��������� ���� ����.\n");
			Pass(pos);
			printf("���� �ö�ͼ� �� ������ ����.\n");
			Pass(pos);
		}

		printf("�� ���� ������� ����� Ȩ�� ���� ���� ��������� �����־���.\n");
		Pass(pos);
		system("cls");
		setcolor(14);
		printf("���� ���ȴ�.\n");
		Pass(pos);
		printf("�� �ʸӿ��� �� ������������ �־���.\n");
		Pass(pos);
		printf("���� ���� �Ѿ�ڸ��� ö�� ö�� �Ҹ��� ���鼭 ������������ �ٸ� ���� ���� ���ߴ�.\n");
		Pass(pos);
		printf("����� ���� ���������忡�� ������.\n");
		Pass(pos);
		printf("�̰��� �� ����Ʈ�� �����������̾���.\n");
		Pass(pos);
		printf("�� ����Ʈ���� ������ ���� �μ̴�.\n");
		Pass(pos);
		printf("�ʹ� �������� ���� �޺��̾���.\n");
		Pass(pos);
		printf("����Ʈ ���� �׳� ����� ���׿���.\n");
		Pass(pos);
		printf("���� ���̳� ����.\n");
		Pass(pos);
		setcolor(11);
		printf("CLEAR\n");
		Pass(pos);
		printf("��ŵ� ���� �����ϼ̽��ϴ�.\n");
		Pass(pos);
		exit(0);
}

void Pass(int pos)
{
	int a = getch();
	if (a == 'm' || a == 'M')
	{
		system("cls");
		ShowMap(pos);
		getch();
		system("cls");
	}
}