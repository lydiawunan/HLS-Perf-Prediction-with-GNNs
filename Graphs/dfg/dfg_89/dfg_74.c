#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 631694962
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, short p_5, double p_7, float p_11, float p_17)
{
  long long v_21;
  char v_19;
  float v_15;
  char v_13;
  short v_9;
  unsigned short v;
  char result;
  v_21 = (long long)p_7;
  v_15 = 3.35269691082e+38f;
  v_13 = (char)119;
  v_19 = (char)(- (- (- p)));
  v = (unsigned short)(((float)(212 * (int)v_13 + 29925 / ((int)((unsigned short)v_15) + 368)) + (
                        33357.f + - p_17)) - (float)((int)((char)((float)(
                                                                  (long long)v_19 % (
                                                                  v_21 + 34LL)) + (
                                                                  p_11 + p))) - 123));
  v_9 = (short)p_11;
  result = (char)(((long long)((long)(p + (float)v) & (long)9369150464.f / -61063L) % (
                   ((-30446LL + (long long)p_5) - (long long)v) + 718LL)) / (long long)(
                  - ((int)((short)(- p_7)) * (int)(! v_9)) + 787));
  return result;
}


