//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 373872131
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, unsigned long p_9, unsigned long long p_21)
{
  float v_19;
  int v_17;
  long v_15;
  signed char v_13;
  unsigned long long v_11;
  unsigned int v_6;
  long v_4;
  unsigned short v;
  float result;
  v_19 = 7790498304.f;
  v_17 = 46742;
  v_13 = (signed char)59;
  v_11 = (unsigned long long)p_9;
  v_4 = (long)p;
  v_15 = (long)((! v_11 * (unsigned long long)v_4 + (unsigned long long)(
                 (v_17 - 8) - (int)v_19)) | p_21);
  v_6 = (unsigned int)v_15;
  v = (unsigned short)((unsigned long long)(- (- ((unsigned long)v_4 % (unsigned long)(
                                                  v_6 + 943U)))) / ((
                                                                    (
                                                                    (unsigned long long)(
                                                                    p % (
                                                                    p_9 + 255UL)) - (
                                                                    4294921046ULL | v_11)) + (unsigned long long)v_13) + 900ULL));
  result = (float)v;
  return result;
}


