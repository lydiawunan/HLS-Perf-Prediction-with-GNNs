#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 810799828
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, float p_5)
{
  float v_17;
  unsigned long v_15;
  short v_13;
  unsigned long v_11;
  int v_9;
  unsigned short v_7;
  short v;
  long result;
  v_15 = (unsigned long)p_5;
  v_13 = (short)p_5;
  v_11 = 4294956826UL;
  v_9 = 675935409;
  v_7 = (unsigned short)18845;
  v_17 = p * (float)(46960UL ^ (unsigned long)(p_5 - p));
  v_7 = (unsigned short)(- (- ((int)v_13 % 28)) >> (((v_15 - (unsigned long)(
                                                      (int)((unsigned short)1869950225.62) & (int)v_7)) >> (
                                                     (unsigned long)v_17 & 31UL)) & 31UL));
  v = (short)((unsigned long)(- (4294948133U ^ (unsigned int)v_7) >> (
                              ~ v_9 % 122 & 31)) + (unsigned long)((float)v_11 * 1.71626484598e+38f) * 3434538118UL);
  result = (long)(-6036329260. - (double)(- (p * p) / ((float)((int)v - (int)((short)p_5)) + 1017.f)));
  return result;
}


