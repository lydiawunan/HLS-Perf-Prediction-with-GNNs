#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 8858280
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p[2][2], signed char p_4, unsigned char p_11[4][4],
         unsigned int p_13, unsigned int p_15)
{
  unsigned long v_23;
  unsigned char v_21;
  double v_19;
  signed char v_17;
  unsigned char v_9;
  long v_7;
  long v;
  char result;
  v_23 = (unsigned long)p_4;
  v_21 = (unsigned char)p_4;
  v_19 = (double)p_13;
  v_17 = (signed char)38;
  v_9 = (unsigned char)17;
  v_7 = (long)p_4;
  while (18446744073709551521ULL == 3353ULL % (unsigned long long)((int)v_21 / (
                                                                   (int)p_11[3][0] + 627) + 405) - (unsigned long long)(
                                    (int)(! v_17) / ((int)(~ v_17) + 478))) {
    result = v_23 >> ((unsigned long)-4509546667.37 & 31UL);
    v_7 = 794303818L;
    v_19 = (double)(- ((int)v_9 - (int)v_9) + (int)result);
    v_21 = (unsigned char)((long)-1.28039099582e+38f / ((long)((int)p_4 % (
                                                               (int)result + 381)) / (
                                                        v_7 + 869L) + 264L));
  }
  while_0_break: ;
  if (((long long)-2.72202025197e+38f % -49697LL - (long long)(p_15 + (unsigned int)v_17)) + 18656LL < (long long)(~ (
      76U + (unsigned int)((int)((signed char)v_19) % 48)))) {
    v = (long)(- ((int)((unsigned char)((double)v_7 + 1.12145871932e+37)) | (int)(- v_9)));
    result = (char)(- ((unsigned long)1.98626773063e+38f - (3958581930UL + (unsigned long)v)));
    result = (char)(! ((int)p[1][0] / ((int)result + 46)) * (int)p_4);
  }
  else result = (char)((unsigned int)((int)p_11[2][2] * 16737 + 1) - 
                       - p_13 / (unsigned int)((int)((short)2.03748061206e+38f) % (
                                               (int)p[0][0] + 389) + 909));
  return result;
}


