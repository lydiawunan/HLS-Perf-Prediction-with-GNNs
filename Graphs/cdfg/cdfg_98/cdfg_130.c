#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1034649462
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p[1][3][1], unsigned int p_9, int p_11,
                  double p_13, char p_17)
{
  unsigned short v_21;
  signed char v_19;
  signed char v_15;
  unsigned short v_7;
  short v_5;
  unsigned int v;
  unsigned long result;
  v_21 = (unsigned short)8722;
  v_19 = (signed char)p_11;
  v_15 = (signed char)p[0][1][0];
  v_7 = (unsigned short)p_17;
  v = 3755706399U;
  if (((4294925924U % (v + 959U)) / (unsigned int)(((int)v_15 + p_11) + 137)) * (unsigned int)(
      (int)p_17 & - p_11) >= ((22093U | v) ^ (unsigned int)((int)(- v_19) + (int)(~ v_21)))) 
    v = 4294951116U & - (~ p[0][2][0]);
  else {
    result = 179126903UL;
    v_5 = (short)((double)p_9 - - ((double)p_11 * p_13));
    v = (unsigned int)(! (((int)v_5 - 21149) >> ((unsigned long)v_7 * result & 31UL)));
  }
  result = (unsigned long)v;
  return result;
}


