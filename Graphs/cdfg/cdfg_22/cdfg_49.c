#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 734423675
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p)
{
  float v_11;
  unsigned int v_9;
  char v_7;
  int v_5;
  short v;
  int result;
  v_11 = 195.257598877f;
  v_9 = 14302U;
  v_5 = -248527289;
  v = (short)-30759;
  result = -268950138;
  v_7 = (char)v_5;
  if ((long long)v_9 > (-1626LL ^ (long long)(60963 / ((int)((char)v_11) / -123 + 737)))) 
    result = (int)(4294933578UL % (- (4294904585UL / (unsigned long)(
                                      (int)p + 407)) + 909UL));
  else {
    v_7 = (char)((((int)p | (int)p) / ((1 + (int)v_7) + 395)) % (~ (48078 - (int)p) + 614));
    v_5 = (int)(~ p) / ((int)(~ v_7) + 946);
    result = ~ (result / ((int)v + 606)) / ((18776 % (v_5 + 952)) % -77 + 139);
  }
  return result;
}


