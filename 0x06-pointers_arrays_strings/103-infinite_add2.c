#include "main.h"
char *infinite_add(char *n1, char *n2, char *r, int size_r) {
	    int i = 0, j = 0, k = 0, carry = 0, sum = 0;
	    int a;

	        while (n1[i] != '\0') {
			        i++;
				    }
		    while (n2[j] != '\0') {
			            j++;
				        }

		        if (i >= size_r || j >= size_r) {
				        return 0;
					    }

			    i--;
			        j--;
				    while (i >= 0 || j >= 0 || carry > 0) {
					            int x = (i >= 0) ? n1[i--] - '0' : 0;
						            int y = (j >= 0) ? n2[j--] - '0' : 0;
							            sum = x + y + carry;
								            carry = sum / 10;
									            sum %= 10;
										            r[k++] = sum + '0';
											        }

				        if (k >= size_r) {
						        return 0;
							    }

					    r[k] = '\0';

					        for (a = 0; a < k / 2; a++) {
							        char tmp = r[a];
								        r[a] = r[k - a - 1];
									        r[k - a - 1] = tmp;
										    }

						    return r;
}

