#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 219267670
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, unsigned char p_5,
                  unsigned long long p_7[2][5][4], unsigned char p_11,
                  char p_13)
{
  signed char v_23;
  unsigned int v_21;
  unsigned long long v_19;
  short v_17;
  unsigned short v_15;
  signed char v_9;
  char v;
  unsigned char result;
  v_23 = (signed char)p_5;
  v_21 = 4294960952U;
  v_19 = 941711057ULL;
  v_17 = p;
  if ((unsigned long long)(! (488LL - (long long)v_23)) >= (18446744073709518009ULL | 
                                                            (unsigned long long)2.99085081335e+38f * p_7[1][3][1])) {
    v = (char)((((unsigned long long)p_13 % (v_19 + 765ULL)) % (unsigned long long)(
                ((unsigned long)v_21 + 3681261831UL) + 258UL)) % (unsigned long long)(
               ! ((int)v_23 % ((int)p_11 + 948)) + 199));
    v_15 = (unsigned short)((long long)v / (931898871LL % (long long)(
                                            (int)v_17 + 858) + 724LL) | (long long)v);
    v_9 = (signed char)(~ ((int)p_13 - (int)v_15) >> ((42 >> 1) & 31));
  }
  else v_9 = (signed char)0;
  if ((int)(! v_9) != ~ (! ((int)p_11 + -4248))) {
    v = (char)-29;
    result = (unsigned char)((int)p - (int)v);
  }
  else result = (unsigned char)(- (- -241.680419922f));
  return result;
}


