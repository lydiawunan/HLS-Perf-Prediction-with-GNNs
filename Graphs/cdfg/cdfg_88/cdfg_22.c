#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 333303724
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, short p_7[4], signed char p_9,
                  unsigned long long p_17[4][2], int p_19)
{
  char v_15;
  unsigned short v_13;
  short v_11;
  unsigned short v_4;
  unsigned int v;
  unsigned char result;
  v_11 = (short)4209;
  v_4 = (unsigned short)39120;
  v_15 = (char)(18446744073709493498ULL - (p_17[2][1] % (unsigned long long)(
                                           p_19 + 621) - (unsigned long long)p_9));
  if (59 >= - (! ((int)v_15 % ((int)v_4 + 337)))) {
    v_4 = (unsigned short)((int)p * (((int)p_7[0] + (int)p_9) + (int)v_11 % -15));
    v = (unsigned int)v_4;
    result = (unsigned char)((long long)v / 691235468LL);
  }
  else {
    v_13 = (unsigned short)15793;
    result = (unsigned char)v_13;
  }
  return result;
}


