#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1042955531
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p)
{
  unsigned short v_13;
  unsigned long v_10;
  signed char v_8;
  unsigned short v_6;
  int v_4;
  int v;
  int result;
  v_13 = (unsigned short)p;
  v_10 = (unsigned long)p;
  v_8 = (signed char)-122;
  v_6 = (unsigned short)p;
  v = -644316582;
  result = 47668703;
  if ((unsigned long long)((long long)(- v_13) - -99188LL % (long long)(
                                                 (int)(- p) + 251)) != 
      0 / 117ULL) {
    v_6 = (unsigned short)97;
    result = ~ (((int)p & (int)v_6) / ((int)(~ v_6) + 502));
    v_4 = (int)(-666U);
  }
  else {
    v_13 = (unsigned short)32671;
    v_8 = (signed char)(- ((int)(- v_13) + (int)p));
    v_4 = (int)(~ p) / (((int)p * (int)p) / (((int)p + v) + 116) + 959);
  }
  while (! (! result - v % (v_4 + 999)) != (int)v_6) {
    v_8 = (int)v_8 * -26904;
    v_4 = (int)(! (4059090658UL * (unsigned long)((int)p << (v_4 & 7))));
    result = (int)v_10;
    v_6 = (unsigned short)v_4;
  }
  while_0_break: ;
  return result;
}


