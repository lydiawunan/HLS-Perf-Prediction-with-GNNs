#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 303058770
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p[1], float p_7, signed char p_13,
           double p_15[2][2], float p_23)
{
  unsigned long v_21;
  int v_19;
  unsigned char v_17;
  unsigned short v_11;
  unsigned long v_9;
  unsigned int v_4;
  unsigned short v;
  double result;
  v_21 = (unsigned long)p_15[1][1];
  v_19 = 1007036388;
  v_17 = (unsigned char)p_13;
  v_11 = (unsigned short)15300;
  v_9 = (unsigned long)p[0];
  if (((long)v_11 - -6193L) / 83L + (long)((int)v_17 + (int)v_17) != (long)p_7) {
    v_4 = (unsigned int)(- p_7 - (float)(! v_9 / (unsigned long)(((int)v_11 - (int)v_11) + 312)));
    v = (unsigned short)p[0];
    v = v;
  }
  else {
    v_4 = (unsigned int)((-148639013651448LL & (long long)v_19) % (long long)(
                         ! v_21 / ((unsigned long)(- p_23) + 584UL) + 855UL));
    v_17 = (unsigned char)(18446744073671721206ULL & (unsigned long long)(
                           (int)((unsigned short)4.9103610617e+18) | (int)(- v_11)));
    v = (unsigned short)((int)p_13 % (~ ((int)((unsigned char)p_15[1][1]) + (int)v_17) + 139));
  }
  result = (double)(! ((unsigned int)(! v) % (v_4 + 450U)));
  return result;
}


