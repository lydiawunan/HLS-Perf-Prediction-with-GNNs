#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 488123819
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, long long p_7, short p_11[1][3], char p_17[4])
{
  unsigned char v_19;
  float v_15;
  unsigned char v_13;
  unsigned int v_9;
  unsigned long v_5;
  unsigned char v;
  unsigned short result;
  v_19 = (unsigned char)65;
  v_15 = (float)p;
  v_13 = (unsigned char)p_7;
  v_9 = (unsigned int)p_7;
  v_5 = (unsigned long)p_7;
  v = (unsigned char)p;
  result = (unsigned short)((long long)(69847850L / ((long)-8605924291.85 + 997L)) + 1);
  while (((long long)((unsigned long)((int)v >> 4LL) % (v_5 + 722UL)) ^ p_7) <= 
         (long long)v_9 * ((long long)p_11[0][1] / (((long long)v_13 - -53865LL) + 320LL))) {
    v = (unsigned int)v_15 / 917009394U;
    v_13 = (unsigned char)((unsigned long)(- ((int)p_17[2] - 44313)) ^ 
                           (unsigned long)v_19 / (((unsigned long)result ^ v_5) + 350UL));
    v_9 = (unsigned int)(! (short)18513);
    v_5 = (unsigned long)(~ (p_7 - 24358LL) / 683LL);
  }
  while_0_break: ;
  return result;
}


