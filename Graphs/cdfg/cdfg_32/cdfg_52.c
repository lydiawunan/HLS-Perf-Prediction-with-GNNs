#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 673367026
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, unsigned int p_4, unsigned short p_11[4], char p_15,
                  unsigned short p_19)
{
  unsigned long long v_25;
  long v_23;
  double v_21;
  float v_17;
  long long v_13;
  unsigned int v_9;
  unsigned char v_7;
  unsigned long v;
  unsigned long result;
  v_25 = (unsigned long long)p_4;
  v_23 = (long)p_11[2];
  v_21 = 708.164057601;
  v_9 = (unsigned int)p_15;
  v = (unsigned long)p_19;
  while ((unsigned long)(4294952473U - - ((unsigned int)p_19 | 133248137U)) == 
         ~ v - (unsigned long)(p * -57562)) {
    v_9 = v_25 + 1007317083ULL;
    v_25 = (unsigned long long)(30711 / (- ((int)p_15 * (int)p_15) + 613));
    v_21 = (double)((int)p_15);
    v = (unsigned long)((int)p_19 * 179) + ~ (4294938281UL & v);
  }
  while_0_break: ;
  if (3416719833UL == (unsigned long)(~ (- (17357L / (v_23 + 1016L))))) {
    v_7 = (unsigned char)(~ p_11[1]);
    v = (unsigned long)(! ((unsigned int)(- v_7) + (4294963382U & v_9)));
    result = 4294954288UL / (((unsigned long)((unsigned int)p * p_4) - 
                              (unsigned long)-4932745216.f / (v + 53UL)) + 202UL);
  }
  else {
    v_17 = (float)(v_21 + (double)(! (4294967292U - p_4)));
    v_13 = (long long)(~ ((int)((unsigned short)v_17) * (int)p_19));
    result = (unsigned long)((0LL / (! v_13 + 450LL)) * (long long)p_15);
  }
  return result;
}


