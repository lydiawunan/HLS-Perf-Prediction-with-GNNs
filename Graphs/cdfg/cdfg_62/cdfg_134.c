#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 983708640
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, short p_5, char p_7, float p_9,
                   unsigned int p_13)
{
  unsigned long v_21;
  signed char v_19;
  double v_17;
  unsigned int v_15;
  float v_11;
  char v;
  unsigned short result;
  v_19 = (signed char)p_13;
  v_17 = (double)p;
  v_15 = p;
  v_11 = -723.592956543f;
  v = (char)36;
  result = (unsigned short)p;
  while ((float)(((int)p_7 + (int)p_7) % (((int)((char)p_9) + (int)v) + 15) + (int)(
                 - v_11 - (float)(4294967238U / (p_13 + 128U)))) != p_9) {
    v_21 = (unsigned long)v_17 - (unsigned long)v_15 % 4044866169UL;
    v_11 = ((float)((unsigned int)v_19 + p_13) + (p_9 + (float)result)) / (
           (float)(- v_21 / (unsigned long)(p * (unsigned int)p_5 + 796U)) + 542.f);
    v_17 = (double)-7437344768.f;
    v = (char)(v_11 + (float)p);
  }
  while_0_break: ;
  result = (unsigned short)((unsigned int)v % (p + 967U) - (unsigned int)(
                            12 / ((int)p_5 + 265)));
  return result;
}


