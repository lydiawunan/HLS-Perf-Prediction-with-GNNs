#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 692958356
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, short p_7[1], unsigned char p_9,
                   unsigned int p_19, unsigned char p_23)
{
  signed char v_21;
  short v_17;
  unsigned long long v_15;
  int v_13;
  signed char v_11;
  float v_5;
  long long v;
  unsigned short result;
  v_21 = (signed char)73;
  v_13 = (int)p_19;
  v_11 = (signed char)20;
  v_5 = (float)p_23;
  v = 937225671LL;
  if (267414992L - ! ((long)v_11 + -635259272L) != (long)v_21) {
    v = (long long)v_5;
    v_15 = (unsigned long long)(! (- p_9));
    v_5 = (float)((unsigned long long)((int)p_9 % ((int)v_11 + 8) >> (
                                       v_13 / -60 & 31)) + ((unsigned long long)(
                                                            (int)p_7[0] - (int)p_7[0]) & (
                                                            (unsigned long long)p_9 + v_15)));
  }
  else {
    v_11 = (signed char)p_23;
    v_17 = (short)((int)(~ (! v_21)) / ((int)v_11 + 370));
    v_5 = (float)0U;
  }
  result = (unsigned short)((v - (long long)p) * (long long)(v_5 * (float)p_7[0]) - 4294903609LL);
  return result;
}


