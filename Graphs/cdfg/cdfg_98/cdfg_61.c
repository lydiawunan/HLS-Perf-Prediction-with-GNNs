#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 439103990
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p[1])
{
  unsigned long long v_21;
  unsigned short v_19;
  long v_17;
  unsigned int v_15;
  double v_13;
  long v_11;
  unsigned short v_9;
  float v_7;
  signed char v_4;
  signed char v;
  long result;
  v_19 = p[0];
  v_17 = (long)p[0];
  v_15 = (unsigned int)p[0];
  v_13 = (double)p[0];
  v_11 = 66841521L;
  v_9 = (unsigned short)62800;
  v_7 = 409.323577881f;
  while (((unsigned int)v_13 * v_15) % 531U + (unsigned int)(~ p[0]) < 4294956799U) {
    v_21 = (long)v_19 * (v_17 % 112L);
    v_9 = (unsigned short)v_7;
    v_15 = (unsigned int)(- (18446744073709548672ULL * ((unsigned long long)p[0] + v_21)));
    v_13 = (double)22533LL;
  }
  while_0_break: ;
  if ((unsigned long)((long)-2561345382.39 | ((long)(41609 - (int)p[0]) + - v_11)) > 4294929592UL) {
    v_4 = (signed char)(- ((int)p[0] + (int)p[0] % ((int)v_9 + 97)));
    v = (signed char)(! (((unsigned int)v_4 - 938772633U) / (unsigned int)(
                         (int)p[0] * (int)((unsigned short)v_7) + 472)));
    result = (long)(~ v);
  }
  else result = 37L;
  return result;
}


