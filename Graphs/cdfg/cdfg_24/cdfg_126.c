#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 704255662
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p[5][2], unsigned long p_4, long p_7, long long p_13,
                  short p_19)
{
  int v_23;
  double v_21;
  double v_17;
  unsigned short v_15;
  unsigned long v_11;
  long long v_9;
  long v;
  unsigned char result;
  v_23 = (int)p_7;
  v_21 = 907.075636131;
  v_15 = (unsigned short)1613;
  v_9 = -348664706LL;
  v = 46385L;
  if (1031595194UL * ((4294928499UL - (unsigned long)v_23) / (unsigned long)(
                      v + 398L)) != (unsigned long)(! ((long)p_19 / (
                                                       p_7 + 777L) >> (
                                                       - p_7 & 31L)))) {
    v = (long)p[2][1];
    v_11 = 27495UL;
    v_15 = (unsigned short)58626;
  }
  else {
    v_11 = (unsigned long)v_21;
    v_17 = (double)(((int)p_19 * 32168) * 6074);
    v = (long)v_17;
  }
  if ((double)((long long)(v % (p_7 + 16L)) - (56LL - v_9)) + ((double)v_11 + -1919077993.38) / (
                                                              (double)(
                                                              p_13 / (long long)(
                                                              (int)v_15 + 1002)) + 847.) <= -9315893248.) 
    result = (unsigned char)120;
  else result = (unsigned char)((unsigned long)((int)p[0][1] * -2) + (
                                2546226352UL | ~ p_4));
  return result;
}


