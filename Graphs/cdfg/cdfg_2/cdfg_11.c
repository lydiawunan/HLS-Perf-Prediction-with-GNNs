#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 873453976
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, long long p_13)
{
  long long v_19;
  unsigned long long v_17;
  float v_15;
  long long v_10;
  unsigned char v_8;
  unsigned long v_6;
  double v_4;
  char v;
  short result;
  v_19 = (long long)p;
  v_17 = (unsigned long long)p;
  v_15 = (float)p_13;
  v_10 = (long long)p;
  v_8 = (unsigned char)p;
  v_6 = (unsigned long)p;
  v_4 = -9.84669344326e+37;
  result = (short)p;
  while ((unsigned long)v_4 + 3901266751UL != 4294963943UL) {
    v_17 = v_19 - 113LL;
    v_19 = 70LL;
    v_8 = (unsigned char)(((long long)(- p) / (p_13 % (long long)((int)result + 349) + 912LL)) / (
                          p_13 + 614LL));
    v_4 = (double)((float)(- result) - v_15);
  }
  while_0_break: ;
  if ((unsigned long long)(~ ((p_13 / 27LL) % ((long long)(- v_15) + 976LL))) >= v_17) {
    v = (char)v_10;
    v_4 = (double)v_8;
    result = (short)((double)(~ (~ v)) * (v_4 - (double)(v_6 - (unsigned long)v_8)));
  }
  else result = (short)p;
  return result;
}


