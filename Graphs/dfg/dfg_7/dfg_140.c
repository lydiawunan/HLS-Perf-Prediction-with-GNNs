//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 329486601
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, int p_5[1][5], unsigned char p_9,
                float p_13[1], char p_15[2][3][5])
{
  int v_19;
  int v_17;
  long v_11;
  unsigned long long v_7;
  unsigned long long v;
  signed char result;
  v_17 = -972435312;
  v_11 = (long)p_5[0][4];
  v_19 = (int)((! p % (unsigned int)((int)p_15[0][1][2] + 96)) * ((unsigned int)v_17 * (
                                                                  - p * (unsigned int)(- p_13[0]))));
  v_7 = (unsigned long long)((unsigned long)((- v_11 % ((long)(p_13[0] + (float)p_15[1][0][4]) + 729L)) % (long)(
                                             - ((int)p_9 % -11481) + 475)) % (
                             (- (854143334UL % (unsigned long)(v_17 + 203)) + 
                              (4294921852UL & (unsigned long)v_17) % (unsigned long)(
                              -66 / (v_19 + 193) + 918)) + 645UL));
  v = (((unsigned long long)(- p_5[0][2]) ^ ~ v_7) + 56456ULL) >> (- (
                                                                   (unsigned int)p_9 + p) & 63U);
  result = (signed char)(v / (unsigned long long)(p + 17U));
  return result;
}


