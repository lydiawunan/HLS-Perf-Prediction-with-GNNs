#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 605858325
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p, float p_5, short p_9, unsigned char p_19,
           unsigned long long p_23)
{
  float v_27;
  char v_25;
  double v_21;
  unsigned short v_17;
  unsigned long v_15;
  long v_13;
  unsigned int v_11;
  int v_7;
  float v;
  double result;
  v_27 = (float)p_19;
  v_25 = (char)68;
  v_21 = (double)p_23;
  v_17 = (unsigned short)p;
  v_15 = (unsigned long)p_23;
  v_13 = (long)p_5;
  v_7 = -39436;
  if (((-63425730LL + (long long)v_27) * (long long)p_19) % (long long)(
      (int)p_19 + 523) == 0LL) {
    v_11 = (unsigned int)(~ ((unsigned long long)(- v_21) / (p_23 * 18446744073709551500ULL + 1005ULL)));
    v = (float)(((unsigned long)((long)p_5 + v_13) / ((v_15 + (unsigned long)v_17) + 162UL)) / (unsigned long)(
                (int)p_19 + 549));
    result = (double)(v_11 / 13925U);
  }
  else {
    v_7 = (int)(~ p_19);
    result = (double)((long long)v_25 / 427201410LL);
    v = (float)(! (! (p_23 / ((unsigned long long)p_5 + 912ULL))));
  }
  while ((-118 + (int)((signed char)-1.5864695802e+22)) / ((int)(- (- p)) + 363) == 
         (int)((short)(-29123.f + (v - p_5))) / ((int)p + 119)) {
    v_7 = (unsigned long long)v_7 + 8910ULL;
    result = (double)(short)-21895;
    v = (float)(- -1.453556595e+38);
  }
  while_0_break: ;
  return result;
}


