package com.harshil.expensetracker.controller;

import com.harshil.expensetracker.entity.User;
import com.harshil.expensetracker.entity.UserModel;
import com.harshil.expensetracker.exception.ItemAlreadyExistsException;
import com.harshil.expensetracker.exception.NoResourceFoundException;
import com.harshil.expensetracker.service.UserServiceImpl;
import org.springframework.beans.BeanUtils;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import javax.validation.Valid;

@RestController
public class UserController {

    @Autowired
    private UserServiceImpl userService;



    @GetMapping("/users/{id}")
    public ResponseEntity<User> readUser(@PathVariable Long id) throws NoResourceFoundException {
        return new ResponseEntity<>(userService.read(id),HttpStatus.OK);
    }

    @PutMapping("/users/{id}")
    public ResponseEntity<User> updateUser(@PathVariable Long id,@RequestBody UserModel userModel) throws NoResourceFoundException {
        User updatedUser=new User();
        BeanUtils.copyProperties(userModel,updatedUser);
        return new ResponseEntity<>(userService.update(id,updatedUser),HttpStatus.OK);
    }

    @DeleteMapping("/users/{id}")
    public ResponseEntity<HttpStatus> deleteUser(@PathVariable Long id){
        userService.delete(id);
        return new ResponseEntity<>(HttpStatus.NO_CONTENT);
    }
}
