#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 278276140
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, unsigned short p_4, unsigned long p_9,
           unsigned int p_11, unsigned long p_13)
{
  unsigned char v_21;
  short v_19;
  unsigned long long v_17;
  unsigned long v_15;
  float v_7;
  unsigned long v;
  double result;
  v_21 = (unsigned char)206;
  v_19 = (short)p_11;
  v_17 = (unsigned long long)p_9;
  v = (unsigned long)p_11;
  v_21 = (unsigned char)(- ((long long)(! (p_11 - (unsigned int)-2.56486017574e+38f)) % (
                            ~ (-544564874LL / (long long)((int)v_21 + 710)) + 221LL)));
  v_15 = (unsigned long)(v_17 / (unsigned long long)(((unsigned long)(~ p) % (
                                                      p_9 % (unsigned long)(
                                                      (int)v_19 + 390) + 1007UL)) * (unsigned long)(- (
                                                     (int)((unsigned char)-2.36172046065e+38) - (int)v_21)) + 40UL));
  v_7 = (float)(~ ((v / (p_9 + 374UL)) / (((unsigned long)p_11 - p_13) + 734UL)) % (
                ((v_15 * p_9) / 776UL) * 4294967199UL + 902UL));
  result = (double)((float)((unsigned long)(! p) + (unsigned long)(-900757498L + (long)p_4)) / (
                    ((float)v + v_7) + 688.f));
  return result;
}


