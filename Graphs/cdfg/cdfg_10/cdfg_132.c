#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 882613232
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p)
{
  unsigned short v_21;
  unsigned short v_19;
  float v_17;
  unsigned long v_15;
  double v_13;
  short v_11;
  unsigned long v_8;
  int v_6;
  short v_4;
  int v;
  char result;
  v_21 = (unsigned short)42958;
  v_19 = (unsigned short)p;
  v_17 = -641.724060059f;
  v_15 = (unsigned long)p;
  v_13 = (double)p;
  v_11 = (short)30364;
  v_8 = 3485915138UL;
  v_6 = -61286;
  v_4 = (short)3456;
  v = -859896957;
  result = (char)10;
  while ((((long long)(p * (long)v_11) - ((long long)result + -428354626LL)) ^ (long long)(
          (p / (p + 40L)) / (long)((int)(- v_11) + 595))) >= (long long)(
         (unsigned long)((v_13 + (double)result) - (double)((long)v_6 % (
                                                            p + 897L))) - 
         (v_15 - 117UL) / ((unsigned long)(- v_17) + 261UL))) {
    v = (long long)v_21 / ((long long)v_19 % 63935LL + 513LL);
    v_17 = (float)((unsigned long)p & (4080195441UL % (unsigned long)(
                                       p + 645L) + (unsigned long)(p + p)));
    v_19 = (unsigned short)p;
    v_15 = (unsigned long)p;
  }
  while_0_break: ;
  result = (char)((unsigned long)(- (v - (int)v_4)) - - ((unsigned long)v_6 ^ v_8));
  return result;
}


