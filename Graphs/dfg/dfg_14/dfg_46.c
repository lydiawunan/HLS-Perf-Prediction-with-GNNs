#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 139318253
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, unsigned long p_5, long p_13[3][2])
{
  double v_11;
  signed char v_9;
  unsigned char v_7;
  long v;
  unsigned short result;
  v_11 = -3444287317.37;
  v_9 = (signed char)p;
  v_7 = (unsigned char)((long)v_9 / (- (((long)v_11 * p_13[0][0]) % -41926971L) + 21L));
  v = (long)((double)v_7 * -7217618002.39);
  result = (unsigned short)(23912UL + (((unsigned long)v + (unsigned long)p) - (unsigned long)(
                                       59249156L / (v + 634L))) / (- (
                                                                   p_5 + (unsigned long)p) + 273UL));
  result = result;
  return result;
}


