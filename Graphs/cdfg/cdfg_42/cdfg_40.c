#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 114507555
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, int p_9, unsigned char p_11, unsigned int p_17,
                   unsigned int p_21)
{
  float v_19;
  short v_15;
  unsigned int v_13;
  unsigned int v_7;
  unsigned long long v_5;
  float v;
  unsigned short result;
  v_19 = 675.494628906f;
  v_15 = (short)p_17;
  v_13 = p_21;
  if ((unsigned int)v_19 <= p_21) {
    v_7 = ! (- (v_13 - (unsigned int)v_15));
    v_5 = (unsigned long long)(! ((int)p_11 / ((int)p_11 + 1014)) << (
                               ~ (21079 / ((int)p + 383)) & 31));
    v = (float)((27051ULL ^ v_5 * (unsigned long long)v_7) * ((unsigned long long)p_9 * (
                                                              (unsigned long long)p_9 % 19532ULL)));
  }
  else v = (float)((unsigned int)(! (-24354 % ((int)p_11 + 116))) % (
                   p_17 + 1003U));
  result = (unsigned short)((double)(v - (float)(~ p)) - 3.08401158342e+38);
  return result;
}


