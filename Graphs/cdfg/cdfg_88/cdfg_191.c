#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 330176186
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, long long p_4)
{
  unsigned char v_19;
  signed char v_17;
  float v_15;
  double v_13;
  double v_11;
  long long v_9;
  long v_7;
  float v;
  char result;
  v_17 = (signed char)101;
  v_15 = 9404911616.f;
  v_13 = 8328150610.4;
  v_11 = 947.059489864;
  v_9 = p_4;
  v_7 = (long)p;
  v = (float)p;
  result = (char)44;
  while ((long long)v - ((long long)(v_7 / (long)((int)p + 192)) + ~ v_9) != (long long)(- (- v_11))) {
    v_7 = (int)((signed char)v_15) * 10;
    v_19 = (unsigned char)p_4;
    v = (float)((long)(- ((int)v_17 % -1711)) % (((long)v_13 % (v_7 + 620L) - (long)(
                                                  (int)result | (int)v_19)) + 937L));
    v_11 = (double)(~ v_9);
  }
  while_0_break: ;
  result = (char)(~ ((int)p + ((int)result - -19271804)));
  return result;
}


