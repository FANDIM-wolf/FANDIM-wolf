package com.example.TestBob1.Student;

import com.fasterxml.jackson.databind.annotation.JsonAppend;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import java.time.LocalDate;
import java.time.Month;
import java.util.List;


@RestController
@RequestMapping(path="api/v1/student")
public class Student_Controller {
   private  final StudentService studentService;

   @Autowired
   public  Student_Controller(StudentService studentService){
       this.studentService = studentService;
   }
    @GetMapping("/students")
    public List<Student> studentList(){
       return studentService.studentList();
    }

}
