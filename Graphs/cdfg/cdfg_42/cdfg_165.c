#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 616857170
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, long long p_11, unsigned int p_15)
{
  long v_17;
  unsigned short v_13;
  double v_9;
  signed char v_7;
  unsigned char v_5;
  unsigned short v;
  short result;
  v_17 = (long)p_15;
  v_13 = (unsigned short)p_11;
  v_9 = (double)p_11;
  v_5 = (unsigned char)p_11;
  v = (unsigned short)p;
  result = (short)p_15;
  v_7 = (signed char)p;
  while (23846L < ((long)((int)((unsigned short)((float)v / (p + 554.f))) * (int)v) ^ 
                   ((long)v_5 - -23955L) / (long)((int)v_7 + 428))) {
    v_9 = (int)v_9 / 847475313;
    result = (short)((unsigned long)((unsigned int)v_13 * (p_15 * (unsigned int)v_7)) & (unsigned long)(- (
                     947870794L * v_17)));
    v_7 = (signed char)(4674ULL + (unsigned long long)p_11 % 10697ULL);
    v = (unsigned short)(! (- p_11 ^ (long long)p));
  }
  while_0_break: ;
  return result;
}


