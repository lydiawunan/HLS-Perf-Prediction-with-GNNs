#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 269448167
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p[3][3][4], int p_7, long p_9, long p_15,
              unsigned short p_17)
{
  unsigned short v_19;
  signed char v_13;
  long v_11;
  unsigned int v_4;
  long long v;
  long long result;
  v_19 = (unsigned short)p_7;
  v_11 = (long)p[2][0][3];
  v_13 = (signed char)(((long)(- p[1][2][1]) - - p_15 * (long)((int)p[0][0][2] + 194)) % (
                       ! v_11 * ((long)((int)p_17 + -70961485) / (((long)v_19 | p_15) + 85L)) + 637L));
  v = (long long)(((long)p_7 / (((long)p[1][0][1] / (p_9 + 697L) + (v_11 - -6664L)) + 560L)) * (long)v_13);
  v_4 = (unsigned int)((int)p[1][1][3] / ((int)((unsigned char)835.310704267) + 174));
  result = 0LL - 4294914095LL / ((-983505615LL * v) % (long long)(- v_4 + 741U) + 805LL);
  return result;
}


