
hp@DESKTOP-1I21NVJ MINGW64 ~/alx-low_level_programming/0x01-variables_if_else_while (master)
$ cat > 9-print_comb.c

hp@DESKTOP-1I21NVJ MINGW64 ~/alx-low_level_programming/0x01-variables_if_else_while (master)
$ cat > 9-print_comb.c
#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
        int num;

        for (num = 0; num <= 9; num++)
        {
                putchar((num % 10) + '0');
                if (num == 9)
                        continue;

                putchar(',');
                putchar(' ');
        }

        putchar('\n');


hp@DESKTOP-1I21NVJ MINGW64 ~/alx-low_level_programming/0x01-variables_if_else_while (master)
$ cat > 9-print_comb.c
#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
        int num;

        for (num = 0; num <= 9; num++)
        {
                putchar((num % 10) + '0');
                if (num == 9)
                        continue;

                putchar(',');
                putchar(' ');
        }

        putchar('\n');

        return (0);
}

hp@DESKTOP-1I21NVJ MINGW64 ~/alx-low_level_programming/0x01-variables_if_else_while (master)
$ chmod  9-print_comb.c
chmod: missing operand after ‘9-print_comb.c’
Try 'chmod --help' for more information.

hp@DESKTOP-1I21NVJ MINGW64 ~/alx-low_level_programming/0x01-variables_if_else_while (master)
$ chmod u+x 9-print_comb.c

hp@DESKTOP-1I21NVJ MINGW64 ~/alx-low_level_programming/0x01-variables_if_else_while (master)
$ ls
0-positive_or_negative.c  4-print_alphabt.c   8-print_base16.c
1-last_digit.c            5-print_numbers.c   9-print_comb.c
2-print_alphabet.c        6-print_numberz.c   README.md
3-print_alphabets.c       7-print_tebahpla.c

hp@DESKTOP-1I21NVJ MINGW64 ~/alx-low_level_programming/0x01-variables_if_else_while (master)
$ git add .
warning: in the working copy of '0x01-variables_if_else_while/9-print_comb.c', LF will be replaced by CRLF the next time Git touches it

hp@DESKTOP-1I21NVJ MINGW64 ~/alx-low_level_programming/0x01-variables_if_else_while (master)
$ git add .

hp@DESKTOP-1I21NVJ MINGW64 ~/alx-low_level_programming/0x01-variables_if_else_while (master)
$ git commit -m "gemeu"
On branch master
Your branch is ahead of 'origin/master' by 1 commit.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean

hp@DESKTOP-1I21NVJ MINGW64 ~/alx-low_level_programming/0x01-variables_if_else_while (master)
$ git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 4 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 527 bytes | 527.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Bawek/alx-low_level_programming.git
   188d305..b569b9c  master -> master

hp@DESKTOP-1I21NVJ MINGW64 ~/alx-low_level_programming/0x01-variables_if_else_while (master)
$ cat > 9-print_comb.c
#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
