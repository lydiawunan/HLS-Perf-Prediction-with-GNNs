#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 101476299
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, float p_7[4][2], long p_9[5], float p_17,
        unsigned char p_19)
{
  short v_25;
  unsigned long v_23;
  unsigned long v_21;
  char v_15;
  double v_13;
  unsigned short v_11;
  unsigned int v_4;
  unsigned short v;
  int result;
  v_25 = (short)p;
  v = (unsigned short)22551;
  if ((float)v_25 != - (- (-19.f * p_7[3][0]))) {
    v_15 = (char)((unsigned long)((p_17 - (float)v) / ((float)p_19 + 782.f)));
    v_13 = (double)(- (! v_15));
    v_11 = (unsigned short)((0. - - v_13) + (double)(125ULL / ((unsigned long long)v_15 % 43685ULL + 989ULL)));
  }
  else {
    v_23 = (unsigned long)(! (~ (4294918353U ^ p)));
    v_21 = ~ (! (v_23 - 4294948565UL));
    v_11 = (unsigned short)(v_21 << ((p - (unsigned int)((int)p_7[0][1] - 724434239)) & 31U));
  }
  if ((int)(p_7[0][1] - (float)((unsigned long)(p_9[0] >> 4) % 2449473536UL)) != 
      ~ ((int)((unsigned char)-128.255645752f) / 242) / ((-2231537 << (
                                                          (int)(- v_11) & 31)) + 878)) {
    v_4 = (unsigned int)(~ (- (! -528079435L)));
    v = (unsigned short)20273;
    result = (int)((double)((unsigned int)v * (v_4 & (unsigned int)v)) - 0.);
  }
  else result = (int)((float)(4294967168U % (p + 509U)) - (-3.24100553479e+38f - p_7[0][0]));
  return result;
}


