#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 951609593
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, unsigned short p_13, signed char p_15,
                  float p_17[1], int p_23)
{
  unsigned long v_27;
  unsigned int v_25;
  long long v_21;
  unsigned short v_19;
  char v_11;
  unsigned long v_9;
  unsigned short v_7;
  unsigned long v_5;
  unsigned char v;
  unsigned long result;
  v_27 = 65402UL;
  v_25 = 30523U;
  v_21 = (long long)p;
  v_19 = p_13;
  v_11 = (char)102;
  v_7 = (unsigned short)p_15;
  v_5 = 61774UL;
  while ((unsigned long)p <= v_5) {
    v_19 = v_27 & (unsigned long)(v_25 / 4294944992U);
    v_25 = 3850512714U;
    v_7 = (unsigned short)(- -7393308160.f);
    v_5 = (unsigned long)p;
  }
  while_0_break: ;
  if ((492195698LL + (long long)p_17[0]) + ((long long)(- v_19) + v_21) == (long long)(
      p_23 & (65485 >> (p & 31)))) {
    v_5 = (unsigned long)(~ (- (-10648LL + (long long)v_7)));
    v = (unsigned char)v_5;
    result = (unsigned long)(p + (int)(- (~ v)));
  }
  else {
    v_7 = (unsigned short)28460;
    v_9 = (unsigned long)v_7;
    result = ((v_9 / (unsigned long)((int)v_11 + 106)) % (unsigned long)(
              (int)(~ p_13) + 823)) * (unsigned long)(~ (3 % ((int)p_15 + 305)));
  }
  return result;
}


