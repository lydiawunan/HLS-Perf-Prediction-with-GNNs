#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 486151469
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, long p_7[2][2], unsigned long long p_9, float p_11,
                char p_15)
{
  signed char v_25;
  unsigned long long v_23;
  unsigned short v_21;
  float v_19;
  long v_17;
  short v_13;
  unsigned char v_5;
  float v;
  signed char result;
  v_25 = (signed char)39;
  v_23 = (unsigned long long)p_11;
  v_21 = (unsigned short)12214;
  v_19 = 501.256744385f;
  v_17 = (long)p;
  v_13 = (short)-3644;
  v_5 = (unsigned char)p;
  v = (float)p_7[1][1];
  result = (signed char)118;
  while ((long)(! p_15) * (p_7[1][1] * v_17) >> (((long long)((double)v + 178.963869721) | -63058LL) & 31LL) >= (long)(
         (21957 << ((int)((unsigned short)(p_11 + (float)p_15)) & 15)) & (int)v_13)) {
    v_21 = (unsigned long long)v_25 * (v_23 * 5929647951ULL);
    v_13 = (short)(! (2U / (unsigned int)((int)(! v_21) + 521)));
    v_23 = (unsigned long long)(-0);
    v_17 = (long)-1.47778664517e+38;
  }
  while_0_break: ;
  if (~ ((unsigned long long)((float)v_17 / (v_19 + 208.f)) / (((unsigned long long)v_21 + 685065546ULL) + 514ULL)) == (unsigned long long)(
      (unsigned long)((60028L & p_7[0][1]) - 373438827L) - 4294919556UL)) {
    v = (float)((long)(p_11 * -44.f - (float)((int)v_13 + (int)result)) - 
                (long)(-9864 + (int)v_5) / ((long)p_15 % (p_7[1][1] + 382L) + 729L));
    v_5 = (unsigned char)(~ ((unsigned long long)(~ p_7[0][1]) - (p_9 | 51136ULL)));
    result = (signed char)(- ((float)p + v) + (float)((int)result % (
                                                      (int)v_5 + 451) & (int)v_5));
  }
  else result = (signed char)-1.14635047025e+38;
  return result;
}


