#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 895124166
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p)
{
  signed char v_11;
  unsigned long long v_9;
  unsigned short v_7;
  unsigned char v_4;
  float v;
  unsigned long long result;
  v_11 = (signed char)31;
  v_9 = (unsigned long long)p;
  v_7 = (unsigned short)p;
  v_4 = (unsigned char)125;
  v = (float)p;
  result = (unsigned long long)p;
  while ((unsigned long long)((long long)(! p) * -3446LL) > - result) {
    v = (unsigned long long)v_11 - (v_9 | (unsigned long long)((int)v_7 - 712955707));
    v_11 = (signed char)(~ (-0LL));
    v_9 = (unsigned long long)(- (-47 * (-21 & (int)p)));
    result = (unsigned long long)(- v_11);
  }
  while_0_break: ;
  result = (unsigned long long)((unsigned long)((long)(4026723442.44 * (double)v) + 
                                                -70743150L * (long)v_4) + 4294920291UL);
  return result;
}


