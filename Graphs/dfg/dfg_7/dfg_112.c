//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 175905013
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p)
{
  double v_10;
  unsigned char v_8;
  char v_6;
  float v_4;
  signed char v;
  unsigned char result;
  v_10 = (double)p;
  v_8 = (unsigned char)70;
  v_4 = (float)p;
  v = (signed char)p;
  result = (unsigned char)195;
  v_6 = (char)v_4;
  v_6 = (char)((-54372 - (((int)p >> ((int)v_6 & 15)) + (int)v)) * (int)v_8);
  v = (signed char)((double)(- (v_4 / ((float)result + 508.f)) / ((v_4 - (float)(! v_6)) + 308.f)) * - (
                    (double)((float)v_8 + v_4) + - v_10));
  result = (unsigned char)(- v);
  return result;
}


