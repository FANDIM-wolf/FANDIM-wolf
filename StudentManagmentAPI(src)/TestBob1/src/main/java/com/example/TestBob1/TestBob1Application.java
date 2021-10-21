package com.example.TestBob1;

import com.example.TestBob1.Student.Student;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.ui.Model;

import java.time.LocalDate;
import java.time.Month;
import java.util.List;


@SpringBootApplication
public class TestBob1Application {

	public static void main(String[] args) {
		SpringApplication.run(TestBob1Application.class, args);
	}




}
