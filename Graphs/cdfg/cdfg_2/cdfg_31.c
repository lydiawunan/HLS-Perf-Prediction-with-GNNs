#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 463537568
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p, short p_5, unsigned short p_7[5],
                   unsigned char p_15, unsigned char p_17)
{
  int v_19;
  unsigned long v_13;
  float v_11;
  unsigned long v_9;
  unsigned short v;
  unsigned short result;
  v_19 = (int)p_5;
  v_13 = 4294938293UL;
  v_11 = -579.535095215f;
  v_9 = (unsigned long)p;
  result = (unsigned short)14508;
  v = (unsigned short)(p / (long long)((52 - (int)p_15) + 836) + ! p);
  while ((long long)(~ (~ v)) >= (p * (long long)p_5) * (long long)(! p_7[0]) - (long long)(~ (~ v_9))) {
    v_13 = (double)v_13 / (((double)v_11 + -1.40591690987e+38) + 613.);
    result = (unsigned short)v_19;
    v = (unsigned short)((int)(~ (- p_17)) % (((int)(! result) + 56870) + 982));
    v_9 = (unsigned long)(~ (~ ((int)p_15 / ((int)result + 957))));
  }
  while_0_break: ;
  return result;
}


