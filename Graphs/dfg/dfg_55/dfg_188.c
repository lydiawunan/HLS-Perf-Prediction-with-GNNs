#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 309048010
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, long p_11[4])
{
  unsigned char v_13;
  float v_9;
  unsigned short v_7;
  unsigned long long v_5;
  short v;
  signed char result;
  v_13 = (unsigned char)155;
  v_9 = 857.096435547f;
  v_7 = (unsigned short)p_11[2];
  v_5 = (unsigned long long)p;
  v = (short)p_11[1];
  result = (signed char)(((int)(~ v) * (((int)v + (int)v) ^ -82)) % (
                         (int)((double)((float)((int)p / ((int)v_7 + 358)) + 
                                        -231.f / (v_9 + 990.f)) * ((double)p_11[3] - 
                                                                   (double)v_13 / 8606242029.88)) + 519));
  v_7 = (unsigned short)(- result);
  v = (short)((((unsigned long long)(- p) + v_5) + (unsigned long long)(- (
               28259 ^ (int)v_7))) % ((unsigned long long)v_9 + 737ULL));
  result = (signed char)(- (218U % (1013576050U * (unsigned int)(~ v) + 808U)));
  return result;
}


