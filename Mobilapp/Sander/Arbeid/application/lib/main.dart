import 'package:application/gradient_container.dart';
import 'package:flutter/material.dart';


void main() {
  runApp(
    const MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.cyanAccent,
        body: GradientContainer(colors: [Colors.redAccent, Colors.black87]),
      ),
    ),
  );
}