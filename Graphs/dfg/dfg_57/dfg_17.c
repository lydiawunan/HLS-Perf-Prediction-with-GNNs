#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 48384209
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, unsigned long p_13, unsigned short p_15,
                  short p_17[1][5][2])
{
  unsigned short v_23;
  double v_21;
  unsigned int v_19;
  unsigned char v_11;
  unsigned int v_9;
  unsigned short v_7;
  double v_5;
  unsigned long long v;
  unsigned long result;
  v_23 = (unsigned short)62897;
  v_21 = 9629448810.76;
  v_19 = (unsigned int)p;
  v_11 = (unsigned char)19;
  v_9 = (unsigned int)p_17[0][0][1];
  v_7 = p_15;
  v_5 = -8256975308.12;
  v = (unsigned long long)(((long long)(~ (4294946736UL & (unsigned long)v_19)) - (
                            -854968312LL - (long long)((int)((unsigned short)v_21) | 10433))) + (long long)(
                           ((int)v_7 % ((int)v_23 + 151) - 1024248701) * 15330));
  v = (((v - 18446744073709551555ULL) | (unsigned long long)(184 * (int)v_11)) + (unsigned long long)(
       ((unsigned long)p + p_13) ^ 4294950970UL)) | ((v + (unsigned long long)p_15) / (unsigned long long)(
                                                     (int)(- p_17[0][0][1]) + 843) - (unsigned long long)(~ (~ p_15)));
  v_5 = (double)((((unsigned long)((int)((unsigned short)v_5) * (int)v_7) % (
                   ((unsigned long)v_5 + 27402UL) + 396UL)) * (unsigned long)v_9) * (unsigned long)v_7);
  result = (unsigned long)((double)v * ((double)((int)p + 20488) / 3916167028.9) - v_5);
  return result;
}


